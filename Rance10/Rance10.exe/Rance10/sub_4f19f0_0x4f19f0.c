// 函数: sub_4f19f0
// 地址: 0x4f19f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const i = arg1
int32_t* ecx = *(i + 0x74)
void* result

if (ecx != 0 && (*(*ecx + 8))(1) == 0x1b)
    result.b = 0
    return result

do
    if (*(i + 0x8d) == 0)
        result.b = 0
        return result
    
    int32_t edi_1 = *(*(*(i + 0x68) + 0x70) + 0xbc)
    
    if (edi_1 s<= 0)
        break
    
    int32_t var_c_1 = edi_1
    void* esi = sub_4f15e0(*(i + 0x6c))
    int32_t ecx_2
    
    if (esi != 0)
        ecx_2 = *(esi + 8)
    
    if (esi == 0 || edi_1 s< ecx_2 || *(esi + 4) + ecx_2 s<= edi_1)
        i = nullptr
    else
        i = *(*(esi + 0xc) + ((edi_1 - ecx_2) << 2))
while (i != 0)

result.b = 1
return result
