// 函数: sub_688440
// 地址: 0x688440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 4)

for (int32_t edi = *(arg1 + 8); i != edi; i = &i[1])
    int32_t* ecx = *i
    int32_t ebx_1 = ecx[6]
    
    if (ebx_1 s> 0
            && (*(*ecx + 0x30))(ebx_1, ecx[7], ecx[8], ecx[9], ecx[0xa], zx.d(ecx[0xb].b)) == 0)
        return 0

return 1
