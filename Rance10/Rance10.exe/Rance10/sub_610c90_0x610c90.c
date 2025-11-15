// 函数: sub_610c90
// 地址: 0x610c90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743518
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t* ebx
int32_t* var_68 = ebx
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = arg1[0x50]
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x4bda12f7, arg1[0x1f] - arg1[0x1e])
int32_t var_64 = edi
int32_t edx_1 = edx s>> 5
int32_t ebx_1

if (edi u< (edx_1 u>> 0x1f) + edx_1)
    ebx_1 = edi * 0x6c
    ebx = ebx_1 + arg1[0x1e]

struct _EXCEPTION_REGISTRATION_RECORD** result

if (edi u>= (edx_1 u>> 0x1f) + edx_1 || ebx_1 == neg.d(arg1[0x1e]))
    struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x76b424, 0x34)
    int32_t var_8_2 = 0
    var_8_2.b = 1
    char var_44
    ebx.b = sub_612320(arg1, sub_409350(&var_64, &var_2c, &var_44, &var_64))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u< 0x10)
        result.b = ebx.b
    else
        int32_t var_78_8 = 1
        sub_403160(var_2c.d, var_18_1 + 1, 1)
        result.b = ebx.b
else
    int32_t edi_1 = ebx[0x13]
    
    if (edi_1 s> 0)
        void* var_20
        sub_422370(&var_20, edi_1)
        void* ebx_2 = var_20
        int32_t* edx_2 = arg1[0x7e] + ((arg1[0x7f] - 1) << 2)
        int32_t ecx_5 = 0
        
        if (edi_1 s> 0)
            do
                int32_t eax_8 = *edx_2
                edx_2 = &edx_2[-1]
                *(ebx_2 + (ecx_5 << 2)) = eax_8
                ecx_5 += 1
            while (ecx_5 s< edi_1)
        
        arg1[0x7f] -= edi_1
        int32_t var_18
        
        if (ebx_2 != 0)
            sub_403160(ebx_2, (var_18 - ebx_2) s>> 2, 4)
    
    int32_t eax_12 = sub_621850(&arg1[0x52], ebx)
    
    if (eax_12 s>= 0)
        result = sub_6106a0(arg1, eax_12)
        
        if (result.b != 0)
            int32_t ecx_12 = *ebx
            *arg1[0x386] = 0
            arg1[0x386] += 4
            *arg1[0x182] = 0xffffffff
            arg1[0x182] += 4
            arg1[0x74] = arg1[0x75] + ecx_12
            result.b = 1
    else
        void* var_5c
        sub_403360(&var_5c, 0x76b3dc)
        int32_t var_8_1 = 2
        ebx.b = sub_612320(arg1, &var_5c).b
        void* var_48
        
        if (var_48 u< 0x10)
            result.b = ebx.b
        else
            int32_t var_78_4 = 1
            sub_403160(var_5c, var_48 + 1, 1)
            result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
