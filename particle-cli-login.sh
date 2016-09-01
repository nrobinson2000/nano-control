#!/usr/bin/expect
log_user 0
set timeout 10

set user [lindex $argv 0]

set password [lindex $argv 1]

spawn particle cloud login

log_user 0

expect "? Please enter your email address: "
send "$user\r"

log_user 0

expect "? Please enter your password: "
send "$password\r"

interact
