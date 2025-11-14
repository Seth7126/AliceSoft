// 函数: sub_4fe4a0
// 地址: 0x4fe4a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c0d9c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_bc
int32_t eax_2 = __security_cookie ^ &var_bc
int32_t __saved_edi
int32_t var_cc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi = arg2
void** eax_5 = arg1 + 8
int32_t esi = edi[4]
int32_t* edx

if (edi[5] u< 0x10)
    edx = edi
else
    edx = *edi

int32_t ecx = eax_5[4]

if (eax_5[5] u>= 0x10)
    eax_5 = *eax_5

int32_t eax_6 = esi

if (ecx u< esi)
    eax_6 = ecx

int32_t eax_7 = sub_405190(eax_6, edx, eax_5, eax_6)
bool cond:3 = eax_7 == 0

if (eax_7 == 0)
    if (ecx u>= esi)
        eax_7.b = ecx != esi
    else
        eax_7 = 0xffffffff
    
    cond:3 = eax_7 == 0

eax_7.b = cond:3
struct _EXCEPTION_REGISTRATION_RECORD** result

if (eax_7.b == 0 || *(arg1 + 0x20) != arg3)
    int32_t* edx_1 = &data_74f854
    
    if (data_74f868 u>= 0x10)
        edx_1 = data_74f854
    
    int32_t* var_b4_1
    
    if (edi[5] u< 0x10)
        var_b4_1 = edi
    else
        var_b4_1 = *edi
    
    int32_t eax_9 = data_74f864
    
    if (esi u< eax_9)
        eax_9 = esi
    
    int32_t eax_10 = sub_405190(eax_9, edx_1, var_b4_1, eax_9)
    bool cond:5_1 = eax_10 == 0
    
    if (eax_10 == 0)
        int32_t ecx_4 = data_74f864
        
        if (esi u>= ecx_4)
            eax_10.b = esi != ecx_4
        else
            eax_10 = 0xffffffff
        
        cond:5_1 = eax_10 == 0
    
    eax_10.b = cond:5_1
    eax_10.b = eax_10.b == 0
    struct _EXCEPTION_REGISTRATION_RECORD** esi_3
    
    if (eax_10.b == 0)
        sub_505830(arg1 + 0x24)
        esi_3 = arg3
    label_4fe872:
        
        if (arg1 + 8 != edi)
            sub_401ff0(arg1 + 8, edi, 0, 0xffffffff)
        
        *(arg1 + 0x20) = esi_3
        *(arg1 + 0x58) = 1
        result.b = 1
    else
        char var_ac
        char eax_12 = sub_4058a0(&data_74f884, sub_403070(edi, &var_ac, 0, data_74f894))
        int32_t var_98
        
        if (var_98 u>= 0x10)
            j__free(var_ac.d)
        
        int32_t var_98_1 = 0xf
        int32_t var_9c_1 = 0
        var_ac = 0
        
        if (eax_12 == 0)
            int32_t* eax_20
            
            if (edi[5] u< 0x10)
                eax_20 = edi
            else
                eax_20 = *edi
            
            if (sub_44a260(eax_20) != 0)
                esi_3 = arg3
                result = sub_505d90(arg1 + 0x24, edi, esi_3)
                
                if (result.b != 0)
                    goto label_4fe872
            else
                if (edi[5] u>= 0x10)
                    edi = *edi
                
                void** var_d0_17 = edi
                sub_455870(0x6e2170)
                result.b = 0
        else
            int32_t esi_1 = data_74f894
            struct partsengine::CSys4xPath::VTable* const var_b0_1 =
                &partsengine::CSys4xPath::`vftable'
            int32_t var_c_1 = 0
            void* var_34
            sub_514970(&var_34)
            struct partsengine::CSys40Ini::VTable* const var_b0_2 =
                &partsengine::CSys40Ini::`vftable'
            var_c_1.b = 3
            var_c_1.b = 4
            char var_4c
            sub_4028a0(&var_ac, sub_4e7dd0(&var_4c))
            int32_t var_38
            
            if (var_38 u>= 0x10)
                j__free(var_4c.d)
            
            int32_t var_38_1 = 0xf
            int32_t var_3c_1 = 0
            var_4c = 0
            var_c_1.b = 7
            char var_64
            int32_t* eax_16 = sub_403070(edi, &var_64, esi_1, edi[4] - esi_1)
            var_c_1.b = 8
            char var_7c
            int32_t* eax_18 = sub_40d1c0(&var_ac, &var_34, &var_7c, &var_ac)
            var_c_1.b = 9
            char var_94
            sub_410a20(eax_18, eax_18, &var_94, eax_16)
            int32_t var_68
            
            if (var_68 u>= 0x10)
                j__free(var_7c.d)
            
            int32_t var_68_1 = 0xf
            int32_t var_6c_1 = 0
            var_7c = 0
            var_c_1.b = 0xc
            int32_t var_50
            
            if (var_50 u>= 0x10)
                j__free(var_64.d)
            
            int32_t var_50_1 = 0xf
            int32_t var_54_1 = 0
            var_64 = 0
            
            if (sub_605500(&var_94) != 0)
                esi_3 = arg3
                
                if (sub_505e00(arg1 + 0x24, &var_94, esi_3).b != 0)
                    sub_401fb0(&var_94)
                    sub_401fb0(&var_ac)
                    int32_t var_c_2 = 0xffffffff
                    sub_401fb0(&var_34)
                    goto label_4fe872
            else
                if (edi[5] u>= 0x10)
                    edi = *edi
                
                void** var_d0_12 = edi
                sub_455870(0x6e219c)
            
            int32_t var_80
            
            if (var_80 u>= 0x10)
                j__free(var_94.d)
            
            int32_t var_80_1 = 0xf
            int32_t var_84_1 = 0
            var_94 = 0
            
            if (var_98_1 u>= 0x10)
                j__free(var_ac.d)
            
            int32_t var_98_2 = 0xf
            int32_t var_9c_2 = 0
            var_ac = 0
            int32_t var_20
            
            if (var_20 u>= 0x10)
                j__free(var_34)
            
            result.b = 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_bc)
return result
