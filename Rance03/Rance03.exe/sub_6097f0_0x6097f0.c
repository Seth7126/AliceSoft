// 函数: sub_6097f0
// 地址: 0x6097f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cceeb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = *(arg1 + 0xc)
int32_t* result

if (edi == 0)
    result = nullptr
else
    int32_t* result_2
    int32_t* result_7
    sub_420040(arg1 + 4, &result_2, &result_7)
    int32_t* result_6 = result_2
    char eax_3
    int32_t* ecx_1
    
    if (result_6 != *(arg1 + 4))
        ecx_1 = result_6[5]
        eax_3 = ecx_1[4].b
    
    if (result_6 != *(arg1 + 4) && (eax_3 != 0 || eax_3 == arg2.b))
        (**ecx_1)(eax_2)
        result = result_6[5]
    else
        int32_t* eax_6 = (*(*edi + 0x50))(eax_2)
        
        if (eax_6 == 0)
            result = nullptr
        else if ((*(*eax_6 + 8))(result_7, arg2) != 0)
            int32_t eax_13
            int32_t* result_1
            
            if (result_6 == *(arg1 + 4))
                int32_t* result_4
                int32_t ecx_7
                result_4, ecx_7 = sub_69adc6(0x14)
                result_1 = result_4
                result_2 = result_1
                int32_t var_4 = 0
                
                if (result_1 == 0)
                    result_1 = nullptr
                else
                    *result_1 = &graphengine::CCachedTexture::`vftable'{for `ITexture'}
                    result_1[1] = 1
                    result_1[2] = arg1
                    result_1[3] = eax_6
                    result_1[4].b = arg2.b
                    ecx_7 = (**eax_6)()
                
                int32_t var_4_1 = 0xffffffff
                int32_t* result_5 = result_7
                uint32_t var_34_3 = zx.d(data_75dd34)
                result_2 = result_5
                int32_t** var_38_3 = &result_2
                int32_t* result_3 = result_1
                int32_t** var_14
                sub_609a70(arg1 + 4, &var_14, ecx_7)
                eax_13 = *result_5
            else
                result_1 = result_6[5]
                int32_t* ecx_5 = result_1[3]
                
                if (ecx_5 != 0)
                    (*(*ecx_5 + 4))()
                
                result_1[3] = eax_6
                result_1[4].b = arg2.b
                eax_13 = *eax_6
            
            (*eax_13)()
            (**result_1)()
            (*(*eax_6 + 4))()
            result = result_1
        else
            (*(*eax_6 + 4))()
            result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
return result
