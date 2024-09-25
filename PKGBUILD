# Maintainer: Manape <hmpthcs@protonmail.com>
# Modified from Aren's AUR PKGBUILD for wvkbd

pkgname=wvkbd
conflicts=('wvkbd')
provides=('wvkbd')
pkgver=0.r216.g56e72c7
pkgrel=1
pkgdesc='On-screen keyboard for wlroots - hmptchs fork'
url='https://github.com/hmpthcs/wvkbd-fork'
arch=('x86_64' 'i686' 'armv7h' 'aarch64')
license=('GPL3')
depends=('wayland' 'pango' 'cairo')
makedepends=('fontconfig' 'libxkbcommon')
source=('wvkbd-fork::git+https://github.com/hmpthcs/wvkbd-fork#branch=remove-popup')
sha512sums=('SKIP')

pkgver() {
	cd "$pkgname"
#	git checkout remove-popup
	printf '0.r%s.g%s' \
		"$(git rev-list --count master)" \
		"$(git rev-parse --short HEAD)"
}

build() {
	cd "$pkgname"
#	git checkout remove-popup
	make
}

package() {
	cd "$pkgname"
	make PREFIX=/usr DESTDIR="$pkgdir" install
}
