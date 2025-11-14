// 函数: sub_43bb60
// 地址: 0x43bb60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b63b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_7c
int32_t eax_2 = __security_cookie ^ &var_7c
int32_t __saved_edi
int32_t var_90 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_7c = arg1
int32_t edx = *arg3
void** result

if (edx s< arg5)
    int32_t var_6c_1
    __builtin_memset(&var_6c_1, 0, 0x11)
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    int32_t var_4 = 0
    void* ecx = *arg2
    uint32_t ebp_2
    
    if (arg2[1] - ecx s>= edx + 4)
        ebp_2 = ((zx.d(*(ecx + edx + 3)) << 8 | zx.d(*(ecx + edx + 2))) << 8
            | zx.d(*(ecx + edx + 1))) << 8 | zx.d(*(ecx + edx))
        *arg3 = edx + 4
    else
        ebp_2 = 0
    
    int32_t ecx_1 = *arg3
    void* edx_1 = *arg2
    uint32_t ecx_2
    
    if (arg2[1] - edx_1 s>= ecx_1 + 4)
        ecx_2 = ((zx.d(*(edx_1 + ecx_1 + 3)) << 8 | zx.d(*(edx_1 + *arg3 + 2))) << 8
            | zx.d(*(edx_1 + *arg3 + 1))) << 8 | zx.d(*(edx_1 + *arg3))
        *arg3 = ecx_1 + 4
    else
        ecx_2 = 0
    
    char var_5c
    int32_t* ebx
    
    if (*arg3 + 0x10 + ecx_2 s<= arg5)
        int32_t edi_1 = 0
        
        if (ebp_2 s> 0)
            do
                char* eax_24
                eax_24.b = (*arg2 + *arg3)[edi_1]
                int32_t var_78_1
                var_78_1.b = eax_24.b
                sub_4031c0(&var_44, 1, var_78_1.b)
                edi_1 += 1
            while (edi_1 s< ebp_2)
        
        int32_t edx_3 = *arg3 + ecx_2
        *arg3 = edx_3
        void* edi_2 = *arg2
        uint32_t ecx_10
        
        if (arg2[1] - edi_2 s>= edx_3 + 4)
            ecx_10 = ((zx.d(*(edi_2 + edx_3 + 3)) << 8 | zx.d(*(edi_2 + edx_3 + 2))) << 8
                | zx.d(*(edi_2 + edx_3 + 1))) << 8 | zx.d(*(edi_2 + edx_3))
            *arg3 = edx_3 + 4
        else
            ecx_10 = 0
        
        int32_t edi_3 = *arg3
        void* edx_4 = *arg2
        uint32_t ecx_17
        
        if (arg2[1] - edx_4 s>= edi_3 + 4)
            ecx_17 = ((zx.d(*(edx_4 + edi_3 + 3)) << 8 | zx.d(*(edx_4 + edi_3 + 2))) << 8
                | zx.d(*(edx_4 + edi_3 + 1))) << 8 | zx.d(*(edx_4 + edi_3))
            *arg3 = edi_3 + 4
        else
            ecx_17 = 0
        
        int32_t edi_4 = *arg3
        void* edx_5 = *arg2
        uint32_t ecx_24
        
        if (arg2[1] - edx_5 s>= edi_4 + 4)
            ecx_24 = ((zx.d(*(edx_5 + edi_4 + 3)) << 8 | zx.d(*(edx_5 + edi_4 + 2))) << 8
                | zx.d(*(edx_5 + edi_4 + 1))) << 8 | zx.d(*(edx_5 + edi_4))
            *arg3 = edi_4 + 4
        else
            ecx_24 = 0
        
        int32_t edi_5 = *arg3
        void* edx_6 = *arg2
        uint32_t ecx_31
        
        if (arg2[1] - edx_6 s>= edi_5 + 4)
            ecx_31 = ((zx.d(*(edx_6 + edi_5 + 3)) << 8 | zx.d(*(edx_6 + edi_5 + 2))) << 8
                | zx.d(*(edx_6 + edi_5 + 1))) << 8 | zx.d(*(edx_6 + edi_5))
            *arg3 = edi_5 + 4
        else
            ecx_31 = 0
        
        if (&var_5c != arg4)
            sub_401ff0(&var_5c, arg4, 0, 0xffffffff)
        
        char var_2c
        sub_43c2b0(&var_2c, &var_44)
        var_4.b = 1
        int32_t* edi_7 = &var_7c[0xc]
        void** eax_48
        int32_t* ecx_40
        eax_48, ecx_40 = sub_417ed0(edi_7, &var_2c)
        void** esi_1 = eax_48
        char eax_50
        
        if (esi_1 != *edi_7)
            eax_50, ecx_40 = sub_40c3a0(&var_2c, &esi_1[4])
        
        if (esi_1 == *edi_7 || eax_50 != 0)
            int32_t* var_94_5 = ecx_40
            var_7c = &var_2c
            char** var_98_3 = &var_7c
            int32_t* eax_51 = sub_43d320(ecx_40)
            sub_43d3c0(edi_7, &var_7c, esi_1, &eax_51[4], eax_51)
            esi_1 = var_7c
        
        esi_1[0xa] = arg6 + ecx_24
        esi_1[0xb] = ecx_31
        esi_1[0xc] = ecx_10
        esi_1[0xd] = ecx_17
        
        if (&esi_1[0xe] != &var_5c)
            sub_401ff0(&esi_1[0xe], &var_5c, 0, 0xffffffff)
        
        if (&esi_1[0x14] != &var_44)
            sub_401ff0(&esi_1[0x14], &var_44, 0, 0xffffffff)
        
        ebx.b = 1
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c.d)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        
        if (var_30_1 u>= 0x10)
            j__free(var_44.d)
    else
        ebx.b = 0
    
    int32_t var_30_2 = 0xf
    int32_t var_34_2 = 0
    var_44 = 0
    
    if (var_48_1 u>= 0x10)
        j__free(var_5c.d)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_7c)
return result
