// 函数: sub_46aa00
// 地址: 0x46aa00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = arg2

if (esi[4] != 0)
    int32_t var_c_1 = 1
    arg2.b = 0x2e
    void* eax_2 = sub_42cb30(esi, &arg2, arg1)
    
    if (eax_2 == 0xffffffff)
        return sub_46e950(arg1 + 8, esi, eax_2)
    
    struct IEXTreeReader::exfile::CDefineDataTree::VTable** eax_4 = sub_46aa60(arg1, esi)
    
    if (eax_4 != 0)
        sub_475010(eax_4)
        return sub_4752b0(eax_4, 0xffffffff)

return 0
