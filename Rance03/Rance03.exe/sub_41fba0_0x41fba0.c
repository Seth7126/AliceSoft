// 函数: sub_41fba0
// 地址: 0x41fba0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b48e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_70
int32_t eax_2 = __security_cookie ^ &var_70
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
char var_40
int32_t var_28
int32_t var_14

if ((*(*arg1 + 4))(__security_cookie ^ &__saved_edi) == 0)
    sub_401f60(&var_28, (*(*arg1 + 0x10))())
    int32_t var_4 = 0
    int32_t eax_12 = (*(*arg1 + 8))(&var_28, (*(*arg1 + 0xc))())
    char* eax_13 = sub_4211a0(eax_12, eax_12, &var_40)
    
    if (arg2 != eax_13)
        if (arg2[5] u>= 0x10)
            j__free(*arg2)
        
        arg2[5] = 0xf
        arg2[4] = 0
        *arg2 = 0
        sub_4030b0(arg2, eax_13)
    
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        j__free(var_40.d)
    
    int32_t var_4_1 = 0xffffffff
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    var_40 = 0
    
    if (var_14 u>= 0x10)
        j__free(var_28)

if ((*(*arg1 + 4))() != 0)
    sub_402110(arg3, 0x6da7f4, 1)
    int32_t* edx_3 = (**arg1)()
    void* ecx_14
    
    if (*edx_3 != 0)
        int32_t* ecx_15 = edx_3
        void* esi_3 = ecx_15 + 1
        int32_t* eax_19
        
        do
            eax_19.b = *ecx_15
            ecx_15 += 1
        while (eax_19.b != 0)
        ecx_14 = ecx_15 - esi_3
    else
        ecx_14 = nullptr
    
    sub_4057c0(arg3, edx_3, ecx_14)
else
    char* edx_2 = (**arg1)()
    
    if (*edx_2 != 0)
        char* ecx_9 = edx_2
        char* eax_17
        
        do
            eax_17.b = *ecx_9
            ecx_9 = &ecx_9[1]
        while (eax_17.b != 0)
        sub_402110(arg3, edx_2, ecx_9 - &ecx_9[1])
    else
        sub_402110(arg3, edx_2, nullptr)

sub_4057c0(arg3, 0x6da810, 1)
int32_t eax_21 = (*(*arg1 + 0x14))()
int32_t ebx_1 = 0

if (eax_21 s> 0)
    do
        char* edx_5 = (*(*arg1 + 0x38))(ebx_1)
        int32_t var_2c_2 = 0xf
        int32_t var_30_2 = 0
        var_40 = 0
        void* ecx_20
        
        if (*edx_5 != 0)
            char* ecx_21 = edx_5
            char* eax_23
            
            do
                eax_23.b = *ecx_21
                ecx_21 = &ecx_21[1]
            while (eax_23.b != 0)
            ecx_20 = ecx_21 - &ecx_21[1]
        else
            ecx_20 = nullptr
        
        sub_402110(&var_40, edx_5, ecx_20)
        int32_t var_4_2 = 1
        int32_t eax_25 = (*(*arg1 + 0x34))(ebx_1)
        int32_t var_60 = (*(*arg1 + 0x1c))(ebx_1)
        int32_t var_44_1 = 0xf
        int32_t var_48_1 = 0
        char var_58 = 0
        sub_401ff0(&var_58, &var_40, 0, 0xffffffff)
        var_4_2.b = 3
        
        if (var_2c_2 u>= 0x10)
            j__free(var_40.d)
        
        int32_t var_2c_3 = 0xf
        int32_t var_30_3 = 0
        var_40 = 0
        var_4_2.b = 4
        sub_403110(arg3, sub_421060(&var_60, &var_28), nullptr, 0xffffffff)
        var_4_2.b = 3
        
        if (var_14 u>= 0x10)
            j__free(var_28)
        
        int32_t ecx_28 = var_60
        
        if ((ecx_28 - 0xe u<= 3 || ecx_28 - 0x16 u<= 3 || ecx_28 == 0x1e || ecx_28 == 0x20
                || ecx_28 == 0x32 || ecx_28 == 0x34) && eax_25 s> 1)
            int32_t var_88_16 = eax_25
            var_4_2.b = 5
            sub_403110(arg3, sub_4691f0(&var_28, 0x6da80c), nullptr, 0xffffffff)
            var_4_2.b = 3
            
            if (var_14 u>= 0x10)
                j__free(var_28)
        
        sub_4057c0(arg3, 0x6da818, 1)
        int32_t* edx_7 = (*(*arg1 + 0x18))(ebx_1)
        void* ecx_32
        
        if (*edx_7 != 0)
            int32_t* ecx_33 = edx_7
            void* esi_6 = ecx_33 + 1
            int32_t* eax_33
            
            do
                eax_33.b = *ecx_33
                ecx_33 += 1
            while (eax_33.b != 0)
            ecx_32 = ecx_33 - esi_6
        else
            ecx_32 = nullptr
        
        sub_4057c0(arg3, edx_7, ecx_32)
        
        if (ebx_1 s< eax_21 - 1)
            sub_4057c0(arg3, 0x6da814, 2)
        
        int32_t var_4_3 = 0xffffffff
        
        if (var_44_1 u>= 0x10)
            j__free(var_58.d)
        
        ebx_1 += 1
    while (ebx_1 s< eax_21)

sub_4057c0(arg3, 0x6da81c, 1)
int32_t* result = sub_403110(arg2, arg3, nullptr, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_70)
return result
