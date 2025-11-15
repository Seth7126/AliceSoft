// 函数: sub_45b260
// 地址: 0x45b260
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* ebx = arg2

if (ebx == 0 || arg3 s<= 0 || arg4 s<= 0)
    return 

char* esi_1 = (*(*arg1 + 8))(0, 0)
int32_t i_1 = arg4
int32_t edi_3 = (*(*arg1 + 0x1c))() - (arg3 << 2)

if (i_1 s<= 0)
    return 

int32_t i

do
    if (arg3 s> 0)
        int32_t j_1 = arg3
        int32_t j
        
        do
            *esi_1 = *ebx
            esi_1[1] = ebx[1]
            uint32_t eax = zx.d(ebx[2])
            ebx = &ebx[3]
            esi_1[2] = eax.b
            esi_1[3] = 0xff
            esi_1 = &esi_1[4]
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    esi_1 = &esi_1[edi_3]
    i = i_1
    i_1 -= 1
while (i != 1)
