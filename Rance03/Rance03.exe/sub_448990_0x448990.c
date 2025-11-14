// 函数: sub_448990
// 地址: 0x448990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6b68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_4
int32_t* eax_3 = arg_4
struct fileimage::CFileImageAnalyser::VTable* const var_18 =
    &fileimage::CFileImageAnalyser::`vftable'
char* edx = *eax_3
char* var_14 = edx
int32_t* result = eax_3[1]
int32_t* result_1 = result
int32_t var_4 = 0

if (&edx[4] u> result)
labelid_5:
    result.b = 0
else
    void* var_14_1 = &edx[4]
    uint32_t ecx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *arg1 = ecx_7
    
    if (ecx_7 != 1)
    labelid_5:
        result.b = 0
    else if (sub_468b20(&var_18, arg2).b == 0)
    labelid_5:
        result.b = 0
    else if (sub_468b20(&var_18, arg3).b == 0)
    labelid_5:
        result.b = 0
    else if (sub_468b20(&var_18, arg4).b == 0)
    label_448aee:
        result.b = 0
    else if (sub_468b20(&var_18, &arg_4).b == 0)
    label_448aee_1:
        result.b = 0
    else
        int32_t* edi_1 = arg_4
        
        if (edi_1 s<= 0)
        label_448aee_2:
            result.b = 0
        else
            arg1 = 8 - (edi_1 s% 7 + 1)
            sub_4026b0(arg5)
            int32_t esi_1 = 0
            
            if (edi_1 s> 0)
                do
                    if (sub_468a80(&var_18, &arg_4).b == 0)
                        goto label_448aee_2
                    
                    result.b = arg_4.b
                    uint8_t edx_4 = result.b u>> arg1.b
                    result.b <<= (edi_1 s% 7 + 1).b
                    arg_4.b = edx_4 | result.b
                    sub_448e50(arg5, arg_4)
                    esi_1 += 1
                while (esi_1 s< edi_1)
            
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
