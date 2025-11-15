// 函数: sub_4ee090
// 地址: 0x4ee090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1
void* result = sub_4ee010(arg1)

if (result != 0)
    void* edi_1 = *(result + 0x244)
    
    if (edi_1 != 0 && esi != 0)
        result = (*(**(esi + 0x74) + 0x18))()
        
        if (result.b != 0)
            esi, edi_1 = sub_4f01b0(esi)
            result = sub_4f0350(esi)
        
        if (*(edi_1 + 0x25c) == esi)
            *(edi_1 + 0x25c) = 0

return result
