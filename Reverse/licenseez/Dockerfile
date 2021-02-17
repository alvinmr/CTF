FROM ubuntu:20.04

# Open port 5001
EXPOSE 5001

# update
RUN apt-get update -y

# install socat
RUN apt-get install socat wget -y

# Set WorkDir
RUN mkdir /app
WORKDIR /app

# Copy binary to workdir
COPY flag.txt /app/flag.txt
COPY licenseez /app/licenseez

RUN chown root:root licenseez flag.txt
RUN chmod 755 licenseez flag.txt

# Securing Environment
RUN chmod 700 /usr/bin/* /bin/* /tmp /dev/shm
RUN chmod 755 /bin/dash /bin/sh /bin/cat /usr/bin/id /bin/ls

# Run Program
CMD socat TCP-LISTEN:5001,reuseaddr,fork SYSTEM:./licenseez,su=nobody
