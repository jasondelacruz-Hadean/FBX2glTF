#pragma once

int tiff2png(
    const char* tiffname,
    const char* pngname,
    int verbose,
    int force,
              int interlace_type, int png_compression_level, int invert,
              int faxpect_option,
              double gamma);
