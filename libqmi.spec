
%global glib2_version 2.32.0

%global snapshot %{nil}
%global realversion 1.6.0

Name: libqmi
Summary: Support library to use the Qualcomm MSM Interface (QMI) protocol
Version: %{?realversion}
Release: 3%{snapshot}%{?dist}
Group: Development/Libraries
License: LGPLv2+
URL: http://www.freedesktop.org/software/libqmi

# If snapshot is defined, source will be a snapshot of git from the
# master branch on the given date
Source: %{name}-%{realversion}%{snapshot}.tar.xz

BuildRequires: glib2-devel >= %{glib2_version}
BuildRequires: pkgconfig
BuildRequires: automake autoconf intltool libtool
BuildRequires: python >= 2.7

Requires: glib2 >= %{glib2_version}

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
%setup -q -n %{name}-%{realversion}

%build
%configure \
	--disable-static \
	--with-tests=yes
make %{?_smp_mflags}

%install
make install DESTDIR=$RPM_BUILD_ROOT
%{__rm} -f $RPM_BUILD_ROOT%{_libdir}/*.la


%post	-p /sbin/ldconfig
%postun	-p /sbin/ldconfig

%post   devel -p /sbin/ldconfig
%postun	devel -p /sbin/ldconfig


%files
%doc COPYING NEWS AUTHORS README
%{_libdir}/libqmi-glib.so.*

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
%{_mandir}/man1/*


%changelog
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

