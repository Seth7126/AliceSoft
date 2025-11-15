// 函数: sub_51ac60
// 地址: 0x51ac60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable**
     result = *(arg1 + 0x54)

if (result[0x10] != arg2)
    void* __saved_edi_1 = arg2
    result = sub_4f15e0(*(arg1 + 0x58))
    
    if (result != 0)
        int32_t edi_1 = result[2]
        
        if (arg2 s>= edi_1 && result[1] + edi_1 s> arg2)
            result.b = result[3][arg2 - edi_1] != 0
            
            if (result.b != 0)
                *(arg1 + 0x58)
                result = sub_4f1840(arg2)
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** result_1 = result
                int32_t* ecx_4 = result_1[0x1d]
                
                if (ecx_4 != 0)
                    result = (*(*ecx_4 + 8))(1)
                    
                    if (result == 1)
                        sub_4eec50(result_1, result, result)
                        
                        if (*(result_1[0x1d] + 0xf1) != 0 && sub_51aa90(arg1) != 0)
                            sub_4eec50(result_1, 1, 1)
                            sub_4e84a0(result_1[0x1d], 0)
                        
                        sub_4eec50(result_1, 1, 1)
                        sub_4e8510(result_1[0x1d], arg1 + 8)
                        sub_51a030(arg1 + 0x40, arg2)
                        return sub_51a9d0(arg1)

return result
