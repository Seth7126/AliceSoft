// 函数: sub_44a9c0
// 地址: 0x44a9c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t* result

if (arg1 != 0)
    uint32_t* var_8_1 = arg1
    struct fileimage::CFileImageAnalyser::VTable* const var_c =
        &fileimage::CFileImageAnalyser::`vftable'
    void* var_4_1 = &arg1[0x32]
    
    if (&arg1[1] u<= &arg1[0x32] && &arg1[2] u<= &arg1[0x32] && &arg1[3] u<= &arg1[0x32])
        uint32_t* var_8_2 = &arg1[3]
        
        if (sub_61ec90(&var_c, arg2).b != 0 && sub_61ec90(&var_c, arg3).b != 0)
            result.b = 1
            return result

result.b = 0
return result
