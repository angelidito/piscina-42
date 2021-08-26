
#! /bin/sh
ifconfig -a link | grep ether | tr -d " "