// 函数: sub_489720
// 地址: 0x489720
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 0x20)
int32_t* edx = *(arg1 + 0x1c)
uint32_t ebx_3 = (i - edx + 3) u>> 2
int32_t edi = 0

if (edx u> i)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        void* esi_1 = *edx
        
        for (i = *(esi_1 + 0x14); i != *(esi_1 + 0x18); i = &i[1])
            void* ecx_1 = *(*i + 4)
            
            if (ecx_1 != 0)
                *(ecx_1 + 0x2c) = 0
        
        edi += 1
        edx = &edx[1]
    while (edi != ebx_3)

return i
