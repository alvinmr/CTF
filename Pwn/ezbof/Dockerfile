FROM ubuntu:20.04

# Open port 5002
EXPOSE 5002

# update
RUN apt-get update -y

# install socat
RUN apt-get install socat wget -y

# Set WorkDir
RUN mkdir /app
WORKDIR /app

# Copy binary to workdir
COPY flag.txt /app/flag.txt
COPY ezbof /app/ezbof

RUN chown root:root ezbof flag.txt
RUN chmod 755 ezbof flag.txt

# Securing Environment
RUN chmod 700 /usr/bin/* /bin/* /tmp /dev/shm
RUN chmod 755 /bin/dash /bin/sh /bin/cat /usr/bin/id /bin/ls

# Run Program
CMD socat TCP-LISTEN:5002,reuseaddr,fork EXEC:./ezbof,su=nobody
