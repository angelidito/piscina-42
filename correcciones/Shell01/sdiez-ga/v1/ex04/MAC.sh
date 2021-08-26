#!/bin/bash

ifconfig | grep -w ether | sed -e "s/ether //" | tr -d "\t" | tr -d " "
