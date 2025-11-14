// 函数: sub_52e5b0
// 地址: 0x52e5b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char eax = *(arg1 + 0xc)
int32_t* result

if (eax == 0)
label_52e60c:
    
    if (*(arg1 + 0xd) != 0)
        int32_t* result_1 = (*(*arg2 + 0x10))(*(arg1 + 4), *(arg1 + 8))
        result = result_1
        arg2 = result_1
        goto label_52e62b
else if (*(arg1 + 0xd) == 0)
    if (eax == 0)
        goto label_52e60c
    
    if (*(arg1 + 0xd) == 0)
        result = (*(*arg2 + 0xc))(*(arg1 + 4), *(arg1 + 8), 0x20)
        arg2 = result
        goto label_52e62b
    
    if (eax == 0)
        goto label_52e60c
else
    result = (*(*arg2 + 8))(*(arg1 + 4), *(arg1 + 8), 0x20)
    arg2 = result
label_52e62b:
    
    if (result != 0)
        (*(*arg3 + 0x64))(result, 0, 0, (*(*result + 0x10))((*(*result + 0x14))(0, 0, 0, 0)))
        
        for (int32_t* i = *(arg1 + 0x1c); i != *(arg1 + 0x20); i = &i[1])
            void* eax_10 = *i
            int32_t* edi_1 = *(eax_10 + 4)
            int32_t var_8_1 = *arg3 + 0x5c
            result = arg3
            (*arg1)(result, *(eax_10 + 0xc), *(eax_10 + 0x10), edi_1, 0, 0, 
                (*(*edi_1 + 0x10))((*(*edi_1 + 0x14))()))
        
        return result
return 0
