// 函数: sub_6a8420
// 地址: 0x6a8420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t edi = arg1
char** ebx = arg2
char** var_4 = ebx

if (edi == 0)
    return 

int32_t i_1

if ((*(edi + 0x78) & 0x40) != 0)
    if (*(edi + 0x154) != 0 && (*(edi + 0x7c) & 2) == 0)
        arg1 = sub_6a7530(arg1, "Interlace handling should be turned on when using png_read_image")
        *(edi + 0x108) = *(edi + 0x104)
    
    if (*(edi + 0x154) == 0 || *(edi + 0x154) == 0)
        i_1 = 1
    else
        *(edi + 0x7c) |= 2
        i_1 = 7
else
    if (*(edi + 0x154) == 0)
        i_1 = 1
    else
        *(edi + 0x7c) |= 2
        i_1 = 7
    
    int32_t eax = *(edi + 0x78)
    
    if ((eax.b & 0x40) != 0)
        if ((eax & &__dos_header) == 0)
            sub_6a7500(arg1, "png_start_read_image/png_read_update_info: duplicate call")
            noreturn
        
        arg1 = sub_6a7530(arg1, "png_start_read_image/png_read_update_info: duplicate call")
    else
        arg1 = sub_6b1580(arg1)

int32_t j_2 = *(edi + 0x104)
int32_t j_3 = j_2
int32_t i

do
    char** esi_1 = ebx
    
    if (j_2 != 0)
        int32_t j_1 = j_2
        int32_t j
        
        do
            uint32_t var_1c_1 = arg1
            arg1 = sub_6a8080(edi, *esi_1)
            esi_1 = &esi_1[1]
            j = j_1
            j_1 -= 1
        while (j != 1)
        j_2 = j_3
        ebx = var_4
    
    i = i_1
    i_1 -= 1
while (i != 1)
