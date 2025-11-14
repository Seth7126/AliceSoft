// 函数: sub_62b0f0
// 地址: 0x62b0f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t var_4 = arg1

if (arg1 == 0)
    return 

int32_t eax_1 = *(arg1 + 0x78)

if ((eax_1.b & 0x40) != 0)
    if ((eax_1 & &__dos_header) == 0)
        sub_62a520(arg1, "png_read_update_info/png_start_read_image: duplicate call")
        noreturn
    
    sub_62a550(arg1, "png_read_update_info/png_start_read_image: duplicate call")
    return 

sub_633c30(arg1)
sub_62c8d0(arg1, arg2)
