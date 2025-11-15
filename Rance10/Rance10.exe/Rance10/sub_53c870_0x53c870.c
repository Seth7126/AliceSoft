// 函数: sub_53c870
// 地址: 0x53c870
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable**
     result = sub_4f4900(data_7fcba4 + 0x124, arg1)

if (result != 0)
    void* esi_1 = &result[0x33]
    
    if (result[0x44] != arg2)
        int32_t var_c_1 = *(esi_1 + 0x4c)
        *(esi_1 + 0x44) = arg2
        result = sub_4f7c10(esi_1)
        *(esi_1 + 0x150) = 1

return result
