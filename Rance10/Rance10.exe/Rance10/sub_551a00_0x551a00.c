// 函数: sub_551a00
// 地址: 0x551a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a75f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_54 = arg2
int32_t* edx

if (arg2[5] u< 0x10)
    edx = arg2
else
    edx = *arg2

int32_t* ecx

if (*(arg1 + 0x28) u< 0x10)
    ecx = arg1 + 0x14
else
    ecx = *(arg1 + 0x14)

int32_t esi = arg2[4]
int32_t eax_4 = esi
int32_t edi = *(arg1 + 0x24)

if (edi u< esi)
    eax_4 = edi

int32_t result

if (sub_406ac0(eax_4, edx, ecx, eax_4) != 0 || edi u< esi || edi u> esi || *(arg1 + 0x2c) != arg3
        || *(arg1 + 0x30) != arg4 || *(arg1 + 0x34) != arg5)
    sub_551530(arg1)
    int32_t i_1 = arg3
    int32_t esi_2
    
    if (arg3 s>= arg4 + arg3)
        esi_2 = arg3
    else
        int32_t i
        
        do
            int32_t* eax_10 = sub_6e810c(0x6c)
            int32_t* var_58_1 = eax_10
            int32_t var_8_1 = 0
            int32_t* eax_11 = sub_54d5a0(eax_10)
            int32_t var_8_2 = 0xffffffff
            bool cond:0_1 = *(arg1 + 0x61) == 0
            int32_t* var_4c = eax_11
            
            if (not(cond:0_1))
                void* ecx_4 = *eax_11
                eax_11[0xd].b = 1
                
                if (ecx_4 != 0)
                    sub_451b40(ecx_4)
            
            int32_t* edx_1 = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
                var_54)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            void* ecx_6
            
            if (*edx_1 != 0)
                char* ecx_7 = edx_1
                int32_t* eax_12
                
                do
                    eax_12.b = *ecx_7
                    ecx_7 = &ecx_7[1]
                while (eax_12.b != 0)
                ecx_6 = ecx_7 - &ecx_7[1]
            else
                ecx_6 = nullptr
            
            sub_403490(&var_2c, edx_1, ecx_6)
            int32_t var_8_3 = 1
            var_8_3.b = 2
            char var_44
            bool cond:2_1 = sub_54d7d0(eax_11, sub_409350(&i_1, &var_2c, &var_44, &i_1)) == 0
            int32_t var_30
            
            if (var_30 u>= 0x10)
                sub_403160(var_44.d, var_30 + 1, 1)
            
            int32_t var_8_4 = 0xffffffff
            var_30 = 0xf
            int32_t var_34_1 = 0
            var_44 = 0
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            int32_t var_18_2 = 0xf
            int32_t var_1c_2 = 0
            var_2c = 0
            
            if (cond:2_1 != 0)
                if (eax_11 != 0)
                    Concurrency::details::AllocatorBucket::~AllocatorBucket(eax_11)
                    int32_t var_70_6 = 0x6c
                    operator new(eax_11)
                
                result.b = 0
                goto label_551c73
            
            int32_t eax_19 = *(arg1 + 0xc)
            int32_t** ecx_11 = &var_4c
            
            if (&var_4c u< eax_19)
                ecx_11 = *(arg1 + 8)
            
            if (&var_4c u>= eax_19 || ecx_11 u> &var_4c)
                if (eax_19 == *(arg1 + 0x10))
                    int32_t** var_70_5 = ecx_11
                    sub_42cd50(arg1 + 8)
                
                int32_t** eax_22 = *(arg1 + 0xc)
                
                if (eax_22 != 0)
                    *eax_22 = eax_11
            else
                if (eax_19 == *(arg1 + 0x10))
                    int32_t** var_70_4 = ecx_11
                    sub_42cd50(arg1 + 8)
                
                int32_t* ecx_13 = *(arg1 + 0xc)
                
                if (ecx_13 != 0)
                    *ecx_13 = *(*(arg1 + 8) + ((&var_4c - ecx_11) s>> 2 << 2))
            
            i = i_1 + 1
            esi_2 = arg3
            *(arg1 + 0xc) += 4
            i_1 = i
        while (i s< arg4 + esi_2)
    
    if (arg1 + 0x14 != var_54)
        sub_403590(arg1 + 0x14, var_54, 0, 0xffffffff)
    
    *(arg1 + 0x30) = arg4
    *(arg1 + 0x2c) = esi_2
    *(arg1 + 0x34) = arg5

result.b = 1
*(arg1 + 0x40) = 0
*(arg1 + 0x60) = 1
*(arg1 + 0x3c) = 0
*(arg1 + 0x38) = 1
label_551c73:
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
