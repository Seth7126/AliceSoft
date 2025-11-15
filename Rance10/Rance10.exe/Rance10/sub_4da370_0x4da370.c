// 函数: sub_4da370
// 地址: 0x4da370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_2c
struct common::SuicideRefCounter<class partsengine::ISound>::partsengine::CSound::VTable** result =
    __security_cookie ^ &var_2c
struct common::SuicideRefCounter<class partsengine::ISound>::partsengine::CSound::VTable** 
    result_3 = result

if (arg2 != 0 && arg3 != 0)
    sub_4da310(arg1)
    *(arg1 + 8) = arg2
    (**arg2)()
    *(arg1 + 0xc) = arg3
    (**arg3)()
    void* edi_1 = *(arg1 + 8)
    int32_t ebp_2 = *(arg1 + 0xc) + 0x24
    int32_t var_40_1 = ebp_2
    void** var_48
    void* var_20
    int32_t* eax_3 = sub_4ce600(&var_20, var_48)
    int32_t eax_4 = *(edi_1 + 0x54)
    void** eax_5 = sub_432330(edi_1 + 0x54, eax_3)
    void** edi_2 = *(edi_1 + 0x54)
    void** esi_2 = eax_5
    char eax_7
    
    if (esi_2 != edi_2)
        eax_7 = sub_412ca0(eax_3, &esi_2[4])
    
    if (esi_2 == edi_2 || eax_7 != 0)
        esi_2 = edi_2
    
    struct common::SuicideRefCounter<class partsengine::ISound>::partsengine::CSound::VTable** 
        result_2
    result = result_2
    
    if (result u>= 0x10)
        result = sub_403160(var_20, result + 1, 1)
    
    if (esi_2 != eax_4)
        result = sub_4dd660(*(arg1 + 0x10), ebp_2)
        
        if (result == 0)
            int32_t* eax_9 = sub_4ce150(*(arg1 + 8), ebp_2)
            int32_t eax_10 = (*(*eax_9 + 0x14))()
            int32_t eax_11 = (*(*eax_9 + 0x18))()
            result = sub_6e810c(0x2c)
            struct common::SuicideRefCounter<class partsengine::ISound>::partsengine::CSound::VTable
                ** result_1 = result
            result[1] = 1
            *result = &partsengine::CSound::`vftable'{for `common::SuicideRefCounter<class partsengine::ISound>'}
            result[2] = 2
            result[8] = 0xf
            result[7] = 0
            result[3].b = 0
            result[9] = eax_11
            result[0xa] = eax_10
        
        *(arg1 + 0x18) = result

@__security_check_cookie@4(result_3 ^ &var_2c)
return result
