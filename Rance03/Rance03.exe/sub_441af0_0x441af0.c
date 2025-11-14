// 函数: sub_441af0
// 地址: 0x441af0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b68b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20 = arg1
int32_t* arg_4
int32_t* ebx = arg_4
struct _EXCEPTION_REGISTRATION_RECORD** ebp_1

if (ebx != 0)
    ebp_1 = (*(*ebx + 8))(eax_2)

struct _EXCEPTION_REGISTRATION_RECORD** result

if (ebx == 0 || ebp_1 s<= 0)
    result.b = 0
else
    int32_t* var_18
    sub_42f420(&var_18, ebp_1)
    int32_t esi_1 = 0
    int32_t var_4 = 0
    int32_t* edi_1 = var_18
    
    if (ebp_1 s> 0)
        do
            result = (*(*ebx + 0x10))(esi_1)
            
            if (result == 0)
                goto label_441c45_1
            
            edi_1[esi_1] = *result
            esi_1 += 1
        while (esi_1 s< ebp_1)
    
    if (*edi_1 != 0x41 || edi_1[1] != 0x44 || edi_1[2] != 0x53 || edi_1[3] != 0 || edi_1[4] != 3)
    label_441c45:
        ebx.b = 0
    else
        int32_t esi_2 = edi_1[5]
        int32_t* ebp_2 = var_20
        arg_4 = 6
        sub_441860(ebp_2)
        ebx = nullptr
        
        if (esi_2 s<= 0)
        label_441c2b:
            ebx.b = 1
        else
            while (true)
                struct anteater::CADVScene::VTable** eax_5 = sub_69adc6(0x58)
                int32_t* esi_3
                
                if (eax_5 == 0)
                    esi_3 = nullptr
                else
                    esi_3 = sub_4408d0(eax_5)
                
                var_20 = esi_3
                
                if (sub_441030(esi_3, &var_18, &arg_4).b == 0)
                    if (esi_3 != 0)
                        (**esi_3)(1)
                    
                    break
                
                int32_t* esi_4 = ebp_2[1]
                struct _EXCEPTION_REGISTRATION_RECORD* edx_1 = sub_441d60(esi_4, esi_4[1], &var_20)
                int32_t eax_8 = ebp_2[2]
                
                if (0x15555554 - eax_8 u< 1)
                    sub_69a551("list<T> too long")
                    noreturn
                
                ebx += 1
                ebp_2[2] = eax_8 + 1
                esi_4[1] = edx_1
                *edx_1->Handler = edx_1
                
                if (ebx s>= esi_2)
                    goto label_441c2b
            
        label_441c45_1:
            ebx.b = 0
    
    if (edi_1 != 0)
        j__free(edi_1)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
return result
