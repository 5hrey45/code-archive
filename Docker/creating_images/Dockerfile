# use an existing docker image as base
FROM alpine

# download and install dependency
RUN apk add --update gcc
RUN apk add --update redis

# tell the image what to do when it runs as container
CMD [ "redis-server" ]