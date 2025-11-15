// 函数: sub_6a6240
// 地址: 0x6a6240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = 0

if (arg2 == 0)
    sub_6a7530(arg3, "Image width is zero in IHDR")
    ebx = arg2 + 1

if (arg4 == 0)
    sub_6a7530(arg3, "Image height is zero in IHDR")
    ebx = arg4 + 1

if (arg2 u> *(arg3 + 0x290))
    sub_6a7530(arg3, "Image width exceeds user limit in IHDR")
    ebx = 1

if (arg4 u> *(arg3 + 0x294))
    sub_6a7530(arg3, "Image height exceeds user limit in IHDR")
    ebx = 1

if (arg2 u> 0x7fffffff)
    sub_6a7530(arg3, "Invalid image width in IHDR")
    ebx = 1

if (arg4 u> 0x7fffffff)
    sub_6a7530(arg3, "Invalid image height in IHDR")
    ebx = 1

if (arg2 u> 0x1fffff8e)
    sub_6a7530(arg3, "Width is too large for libpng to process pixels")

if (arg5 != 1 && arg5 != 2 && arg5 != 4 && arg5 != 8 && arg5 != 0x10)
    sub_6a7530(arg3, "Invalid bit depth in IHDR")
    ebx = 1

if (arg6 s< 0 || arg6 == 1 || arg6 == 5 || arg6 s> 6)
    sub_6a7530(arg3, "Invalid color type in IHDR")
    ebx = 1

if (arg6 != 3)
    if ((arg6 == 2 || arg6 == 4 || arg6 == 6) && arg5 s< 8)
        sub_6a7530(arg3, "Invalid color type/bit depth combination in IHDR")
        ebx = 1
else if (arg5 s> 8)
    sub_6a7530(arg3, "Invalid color type/bit depth combination in IHDR")
    ebx = 1

if (arg7 s>= 2)
    sub_6a7530(arg3, "Unknown interlace method in IHDR")
    ebx = 1

if (arg8 != 0)
    sub_6a7530(arg3, "Unknown compression method in IHDR")
    ebx = 1

if ((*(arg3 + 0x74) & 0x1000) != 0 && *(arg3 + 0x268) != 0)
    sub_6a7530(arg3, "MNG features are not allowed in a PNG datastream")

int32_t result = arg9

if (result == 0)
label_6a6411:
    
    if (ebx != 1)
        return result
else
    if ((*(arg3 + 0x268) & 4) == 0 || result != 0x40 || (*(arg3 + 0x74) & 0x1000) != 0)
        result = sub_6a7530(arg3, "Unknown filter method in IHDR")
        ebx = 1
    else if (arg6 != 2 && arg6 != 6)
        result = sub_6a7530(arg3, "Unknown filter method in IHDR")
        ebx = 1
    
    if ((*(arg3 + 0x74) & 0x1000) == 0)
        goto label_6a6411
    
    sub_6a7530(arg3, "Invalid filter method in IHDR")

sub_6a7500(arg3, "Invalid IHDR data")
noreturn
