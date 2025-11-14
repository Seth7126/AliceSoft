// 函数: sub_491ff0
// 地址: 0x491ff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
int32_t result = *(arg1 + 0x70)
void* esi = *(result + 0xf0)
*(result + 0x168) = 1

if (esi != 0)
    int32_t* ebx_1 = *(esi + 0x10)
    int32_t* edi_1 = *(esi + 0x14)
    
    if (ebx_1 != 0 && edi_1 != 0)
        sub_490380(esi)
        *(esi + 0x10) = ebx_1
        (**ebx_1)()
        *(esi + 0x14) = edi_1
        (**edi_1)()
        return sub_490470(esi)

return result
