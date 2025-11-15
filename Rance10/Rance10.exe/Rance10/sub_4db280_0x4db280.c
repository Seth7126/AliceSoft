// 函数: sub_4db280
// 地址: 0x4db280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x54) = 1
int32_t* result = *(arg1 + 0x24)
int32_t* esi = *(arg1 + 0x20)
uint32_t ebx_3 = (result - esi + 3) u>> 2
int32_t edi = 0

if (esi u> result)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        result = *esi
        void* ecx = result[7]
        *(result + 0x31) = 1
        
        if (ecx != 0 && result[0xa].b != 0)
            result = sub_4d8c20(ecx)
        else if (*(result + 0x29) != 0 && result[8] != 0)
            result = sub_4db280()
        else if (*(result + 0x2a) != 0)
            void* ecx_2 = result[9]
            
            if (ecx_2 != 0)
                result = sub_4d49c0(ecx_2)
        
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

return result
