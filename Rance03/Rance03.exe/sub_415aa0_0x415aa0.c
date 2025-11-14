// 函数: sub_415aa0
// 地址: 0x415aa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3f20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = *(arg1 + 0x4c)
void* ebp = arg1 + 0x48

for (int32_t* i = *ebp; i != edi; i = &i[3])
    (**i)(0)

*(ebp + 4) = *ebp

if (arg1 + 0x18 != arg2)
    sub_401ff0(arg1 + 0x18, arg2, 0, 0xffffffff)

void* result

if (arg3 == 0)
label_415b44:
    sub_41b590(arg1 + 4)
    result = *(arg1 + 0x30)
    char* result_1
    
    if (result != *(arg1 + 0x34))
        result_1 = result
    else
        result_1 = nullptr
    
    int32_t edi_4 = *(arg1 + 0x34) - result + result_1
    
    while (result_1 u< edi_4)
        result.b = *result_1
        
        if ((result.b u>= 0x81 && result.b u<= 0x9f) || (result.b u>= 0xe0 && result.b u<= 0xef))
            result_1 = &result_1[2]
        else if (result.b != 0x2f || &result_1[1] u>= edi_4)
            result_1 = &result_1[1]
        else if (result_1[1] == 0x2f)
            char* result_4 = result_1
            result_1 = &result_1[2]
            
            if (result_1 u>= edi_4)
                break
            
            while (true)
                result.b = *result_1
                
                if ((result.b u< 0x81 || result.b u> 0x9f)
                        && (result.b u< 0xe0 || result.b u> 0xef))
                    result_1 = &result_1[1]
                    
                    if (result.b == 0)
                        struct dpanalysis::CCommentArea::VTable* const var_24 =
                            &dpanalysis::CCommentArea::`vftable'
                        char* result_6 = result_4
                        char* result_2 = result_1
                        int32_t var_4 = 0
                        sub_415cc0(ebp, &var_24)
                        int32_t var_4_1 = 0xffffffff
                        var_24 = &dpanalysis::CCommentArea::`vftable'
                        break
                else
                    result_1 = &result_1[2]
                
                if (result_1 u>= edi_4)
                    goto label_415c99
        else if (&result_1[1] u>= edi_4 || result_1[1] != 0x2a)
            result_1 = &result_1[1]
        else
            char* result_5 = result_1
            void* esi_1 = &result_1[2]
            
            if (esi_1 u>= edi_4)
                break
            
            result = esi_1 + 1
            
            while (true)
                char ecx_7 = *esi_1
                
                if ((ecx_7 u< 0x81 || ecx_7 u> 0x9f) && (ecx_7 u< 0xe0 || ecx_7 u> 0xef))
                    if (ecx_7 == 0x2a && result u< edi_4 && *result == 0x2f)
                        result_1 = esi_1 + 2
                        struct dpanalysis::CCommentArea::VTable* const var_18 =
                            &dpanalysis::CCommentArea::`vftable'
                        char* result_7 = result_5
                        char* result_3 = result_1
                        int32_t var_4_2 = 1
                        sub_415cc0(ebp, &var_18)
                        int32_t var_4_3 = 0xffffffff
                        var_18 = &dpanalysis::CCommentArea::`vftable'
                        break
                    
                    esi_1 += 1
                    result += 1
                else
                    esi_1 += 2
                    result += 2
                
                if (esi_1 u>= edi_4)
                    goto label_415c99
    
label_415c99:
    result.b = 1
else
    result = (*(*arg3 + 0x14))(eax_2)
    
    if (result s> 0)
        sub_403540(arg1 + 0x30, result)
        int32_t* eax_7 = *(arg1 + 0x30)
        int32_t* edi_1
        
        if (eax_7 != *(arg1 + 0x34))
            edi_1 = eax_7
        else
            edi_1 = nullptr
        
        sub_69d850(edi_1, (*(*arg3 + 0x18))(result))
        ebp = arg1 + 0x48
        goto label_415b44
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
