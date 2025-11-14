// 函数: sub_6437c0
// 地址: 0x6437c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_4_1 = ecx
int32_t* ebx = arg4
int32_t ecx_1 = *ebx
int32_t result = 0
int32_t i_1 = divs.dp.d(sx.q(arg3), ecx_1)
arg4 = i_1

if (i_1 s> 0)
    int128_t* edi_1 = arg2
    int32_t i
    
    do
        void* eax_3 = sub_643350(ebx, edi_1)
        void* ecx_3
        
        if (eax_3 s>= 0)
            ecx_3 = ebx[3]
        
        int32_t eax_8
        
        if (eax_3 s< 0 || eax_3 s>= *(ecx_3 + 4))
            eax_8 = 0
        else
            sub_637ef0(arg1, ebx[5][eax_3], (*(ecx_3 + 8))[eax_3])
            eax_8 = *((eax_3 << 2) + *(ebx[3] + 8))
            i_1 = arg4
        
        result += eax_8
        edi_1 += ecx_1 << 2
        i = i_1
        i_1 -= 1
        arg4 = i_1
    while (i != 1)

return result
