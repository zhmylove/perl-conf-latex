# TODO RandR typemap of
# # mode_info_t,
# # transform_t,
# # monitor_info_t not implemented
if (index $path, "randr") {
    my $randr_exclude = join "|", qw(
        randr_create_mode
        randr_set_monitor
        randr_set_crtc_transform );
    @request = grep ! /^HV \*\s+$randr_exclude\b/, @request;
}
