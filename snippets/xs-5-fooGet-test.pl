#!/usr/bin/perl
use ExtUtils::testlib;
use Mytest;

use Data::Dumper;
warn Dumper Mytest::fooGet();
