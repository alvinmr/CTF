
FROM php:7.4-fpm

RUN apt-get update 2>/dev/null | grep packages | cut -d '.' -f 1 && apt-get install -y libmcrypt-dev vim libfreetype6-dev libjpeg62-turbo-dev libpng-dev && apt clean
RUN pecl install mcrypt && docker-php-ext-enable mcrypt
RUN docker-php-ext-install -j$(nproc) iconv pdo_mysql gd
RUN docker-php-ext-configure gd 

WORKDIR /var/www
