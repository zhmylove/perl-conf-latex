struct xcb_randr_mode_info_t {
    uint32_t id;
    uint16_t width;
    uint16_t height;
    uint32_t dot_clock;
    uint16_t hsync_start;
    uint16_t hsync_end;
    uint16_t htotal;
    uint16_t hskew;
    uint16_t vsync_start;
    uint16_t vsync_end;
    uint16_t vtotal;
    uint16_t name_len;
    uint32_t mode_flags;
};
