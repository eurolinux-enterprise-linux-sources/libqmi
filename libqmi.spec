%global _hardened_build 1

Name: libqmi
Summary: Support library to use the Qualcomm MSM Interface (QMI) protocol
Version: 1.18.0
Release: 2%{?dist}
Group: Development/Libraries
License: LGPLv2+
URL: http://freedesktop.org/software/libqmi
Source: http://freedesktop.org/software/libqmi/%{name}-%{version}.tar.xz

BuildRequires: glib2-devel >= 2.32.0
BuildRequires: pkgconfig(gudev-1.0) >= 147
BuildRequires: python >= 2.7
BuildRequires: gtk-doc
BuildRequires: libmbim-devel >= 1.14.0

%description
This package contains the libraries that make it easier to use QMI functionality
from applications that use glib.


%package devel
Summary: Header files for adding QMI support to applications that use glib
Group: Development/Libraries
Requires: %{name}%{?_isa} = %{version}-%{release}
Requires: glib2-devel
Requires: pkgconfig

%description devel
This package contains the header and pkg-config files for development
applications using QMI functionality from applications that use glib.

%package utils
Summary: Utilities to use the QMI protocol from the command line
Requires: %{name}%{?_isa} = %{version}-%{release}
License: GPLv2+

%description utils
This package contains the utilities that make it easier to use QMI functionality
from the command line.


%prep
%setup -q

%build
%configure --disable-static --enable-gtk-doc --enable-mbim-qmux

# Uses private copy of libtool:
# http://fedoraproject.org/wiki/Packaging:Guidelines#Beware_of_Rpath
sed -i 's|^hardcode_libdir_flag_spec=.*|hardcode_libdir_flag_spec=""|g' libtool
sed -i 's|^runpath_var=LD_RUN_PATH|runpath_var=DIE_RPATH_DIE|g' libtool

LD_LIBRARY_PATH="$PWD/src/libqmi-glib/.libs" make %{?_smp_mflags} V=1

# Build the library with older SONAME too
rm src/libqmi-glib/libqmi-glib.la
LD_LIBRARY_PATH="$PWD/src/libqmi-glib/.libs" make %{?_smp_mflags} V=1 -C src/libqmi-glib libqmi_glib_la_LDFLAGS='-version-info 1:0:0' libqmi-glib.la
mv src/libqmi-glib/.libs/libqmi-glib.so.1.0.0 .
rm src/libqmi-glib/libqmi-glib.la
LD_LIBRARY_PATH="$PWD/src/libqmi-glib/.libs" make %{?_smp_mflags} V=1

%install
make install DESTDIR=$RPM_BUILD_ROOT
%{__rm} -f $RPM_BUILD_ROOT%{_libdir}/*.la
find %{buildroot}%{_datadir}/gtk-doc |xargs touch --reference configure.ac
install libqmi-glib.so.1.0.0 %{buildroot}%{_libdir}/
ln -sf libqmi-glib.so.1.0.0 %{buildroot}%{_libdir}/libqmi-glib.so.1


%post	-p /sbin/ldconfig
%postun	-p /sbin/ldconfig


%files
%doc NEWS AUTHORS README
%license COPYING
%{_libdir}/libqmi-glib.so.*
%{_datadir}/bash-completion

%files devel
%dir %{_includedir}/libqmi-glib
%{_includedir}/libqmi-glib/*.h
%{_libdir}/pkgconfig/qmi-glib.pc
%{_libdir}/libqmi-glib.so
%dir %{_datadir}/gtk-doc/html/libqmi-glib
%{_datadir}/gtk-doc/html/libqmi-glib/*

%files utils
%{_bindir}/qmicli
%{_bindir}/qmi-network
%exclude %{_bindir}/qmi-firmware-update
%{_mandir}/man1/*
%{_libexecdir}/qmi-proxy


%changelog
* Tue Oct 24 2017 Lubomir Rintel <lrintel@redhat.com> - 1.18.0-2
- Remove qmi-firmware-update

* Tue Aug 29 2017 Lubomir Rintel <lrintel@redhat.com> - 1.18.0-1
- Update to 1.18.0 (rh #1483051)

* Fri Jul 08 2016 Lubomir Rintel <lkundrak@v3.sk> - 1.16.0-1
- Update to 1.16.0

* Wed Oct 22 2014 Thomas Haller <thaller@redhat.com> - 1.6.0-4
- fix potential buffer overflows in parser code (rh #1031738)

* Fri Jan 24 2014 Daniel Mach <dmach@redhat.com> - 1.6.0-3
- Mass rebuild 2014-01-24

* Fri Dec 27 2013 Daniel Mach <dmach@redhat.com> - 1.6.0-2
- Mass rebuild 2013-12-27

* Fri Sep  6 2013 Dan Williams <dcbw@redhat.com> - 1.6.0-1
- Update to 1.6.0 release

* Fri Jun  7 2013 Dan Williams <dcbw@redhat.com> - 1.4.0-1
- Update to 1.4.0 release

* Fri May 10 2013 Dan Williams <dcbw@redhat.com> - 1.3.0-1.git20130510
- Initial Fedora release

