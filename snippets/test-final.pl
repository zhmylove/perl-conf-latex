#!/usr/bin/perl
use ExtUtils::testlib;
use Mytest;
Mytest::foo({number => 100500, string => "pwnd\n"});

use Data::Dumper;
warn Dumper Mytest::fooGet();
