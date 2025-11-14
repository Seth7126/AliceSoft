// 函数: sub_5cb320
// 地址: 0x5cb320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9df8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_5 = arg1[0x82]
int32_t edi = arg1[0x50]
void* result = &eax_5[1]
var_38 = *eax_5
arg1[0x82] = result

if (edi s>= 0)
    int32_t* ecx_2 = arg1[0x28] - arg1[0x27]
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = muls.dp.d(0x38e38e39, ecx_2)
    int32_t eax_9 = ecx_2 s/ 0x48
    int32_t var_50_6
    
    if (edi u>= eax_9)
        var_50_6 = edi
        result = sub_5c24e0(eax_9, edx_1 s>> 4, ecx_2, arg1, 0x6e9168)
    else
        eax_9 = arg1[0x27]
        int32_t edx_2 = edi * 9
        int32_t ebx_1 = eax_9 + (edx_2 << 3)
        
        if (ebx_1 == 0)
            var_50_6 = edi
            result = sub_5c24e0(eax_9, edx_2, ecx_2, arg1, 0x6e9168)
        else
            int32_t edi_1 = var_38
            void* var_34
            sub_5bd8d0(&arg1[0x12], &var_34, edi_1)
            int32_t var_4 = 0
            int32_t* ecx_5
            int32_t edx_3
            result, ecx_5, edx_3 = sub_5d62c0(&arg1[0x5b], &var_34, &var_38)
            
            if (result.b == 0)
                result = sub_5c24e0(result, edx_3, ecx_5, arg1, 0x6e91cc)
            else if (*(ebx_1 + 0x28) == 3)
                int32_t ecx_7 = arg1[0x19] - arg1[0x18]
                int32_t var_1c = var_38
                int32_t var_14_1 = edi_1
                int32_t var_18_1 = ecx_7 s/ 0xc
                result, ecx_5, edx_3 = sub_5caba0(arg1, ebx_1, &var_1c, 3)
                
                if (result.b == 0)
                    int32_t var_50_4 = 0x6e9204
                    result = sub_5c2400(result, edx_3, ecx_5, arg1, &data_6e9260)
            else
                char const* const var_50_3 = "message"
                result = sub_5c2400(result, edx_3, ecx_5, arg1, &data_6e9224)
            
            int32_t var_20
            
            if (var_20 u>= 0x10)
                result = j__free(var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
