# Created by: Arjan Koole <arjan@blackoak.net>
# $FreeBSD$

PORTNAME=	redis
PORTVERSION=	2.2.4
CATEGORIES=	databases
PKGNAMEPREFIX=	php55-

MAINTAINER=	m.tsatsenko@gmail.com
COMMENT=	PHP5-Extension for Redis

LICENSE=	PHP301

BROKEN_powerpc64=	Does not build

USE_GITHUB=	yes
GH_ACCOUNT=	nicolasff
GH_PROJECT=	phpredis

USE_PHP=	session
USE_PHP_BUILD=	yes
USE_PHPEXT=	yes
PHP_DEFAULT=	5.5
IGNORE_WITH_PHP=	56 70

PHP_MODNAME=	redis

OPTIONS_DEFINE=	IGBINARY
IGBINARY_DESC=	Build with Igbinary serializer

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MIGBINARY}
USE_PHP+=	igbinary
CONFIGURE_ARGS+=--enable-redis-igbinary
.else
CONFIGURE_ARGS+=--disable-redis-igbinary
.endif

.include <bsd.port.mk>
