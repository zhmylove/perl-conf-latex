xcb_randr_create_mode_cookie_t xcb_randr_create_mode(
    xcb_connection_t *conn,
    xcb_window_t window,
    struct xcb_randr_mode_info_t mode_info, // <----- PROBLEM
    uint32_t name_len,
    const char *name
);
