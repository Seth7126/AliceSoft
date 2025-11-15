// 函数: sub_512970
// 地址: 0x512970
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_74 = 0xffffffff
int32_t (* var_78)(void* arg1) = sub_7382fe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_70
int32_t eax_2 = __security_cookie ^ &var_70
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_9c = arg3
struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** result

if (arg3 != 0)
    int32_t eax_3 = *(arg2 + 8)
    int32_t esi_1 = *(arg2 + 4)
    struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** ebx_1 =
        sub_46d660(sbb.d(arg1, arg1, esi_1 u< eax_3) & esi_1, eax_3 - esi_1)
    
    if (ebx_1 == 0)
        result.b = 0
    else
        struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable* eax_4 = *ebx_1
        struct common::CEXReader::VTable* const var_94 = &common::CEXReader::`vftable'
        eax_4->vFunc_0(eax_2)
        int32_t var_74_1 = 0
        (*ebx_1)->vFunc_1()
        int32_t* var_38
        sub_403360(&var_38, 0x7667dc)
        var_74_1.b = 1
        void* esi_2 = &ebx_1[1]
        int32_t* ecx_5 = &var_38
        int32_t var_24
        
        if (var_24 u>= 0x10)
            ecx_5 = var_38
        
        int32_t eax_7 = (*(*esi_2 + 8))(ecx_5, 0)
        var_74_1.b = 0
        
        if (var_24 u>= 0x10)
            sub_403160(var_38, var_24 + 1, 1)
        
        sub_403360(&var_38, 0x7667f0)
        var_74_1.b = 2
        int32_t** ecx_10 = &var_38
        
        if (var_24 u>= 0x10)
            ecx_10 = var_38
        
        void* eax_9 = (*(*esi_2 + 8))(ecx_10, 0)
        var_74_1.b = 0
        
        if (var_24 u>= 0x10)
            sub_403160(var_38, var_24 + 1, 1)
        
        int32_t* var_68
        sub_403360(&var_68, 0x7667c0)
        var_74_1.b = 3
        int32_t* ecx_15 = &var_68
        int32_t var_54
        
        if (var_54 u>= 0x10)
            ecx_15 = var_68
        
        int32_t* eax_11 = (*(*esi_2 + 0x2c))(ecx_15)
        struct common::CEXArrayReader::VTable* const var_a8_1 = &common::CEXArrayReader::`vftable'
        int32_t* var_a4_1 = eax_11
        var_74_1.b = 5
        
        if (var_54 u>= 0x10)
            sub_403160(var_68, var_54 + 1, 1)
        
        int32_t var_54_1 = 0xf
        int32_t var_58_1 = 0
        var_68.b = 0
        
        if (eax_11 != 0)
            int32_t eax_15 = (*(*eax_11 + 8))()
            int32_t esi_3 = 0
            var_70 = eax_15
            
            if (eax_15 s<= 0)
                esi_2 = &ebx_1[1]
            else
                do
                    int32_t eax_17
                    int32_t ecx_19
                    eax_17, ecx_19 = (*(*eax_11 + 0xc))(esi_3, 0)
                    int32_t var_c4_2 = eax_7
                    var_70 = eax_17
                    int32_t* var_c8_7 = &var_70
                    int32_t* var_b0
                    sub_514cb0(&arg1[8], &var_b0, ecx_19)
                    esi_3 += 1
                while (esi_3 s< eax_15)
        
        struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** var_c_1 = 0xf
        int32_t var_10_1 = 0
        char var_20 = 0
        sub_403490(&var_20, 0x7667cc, 0xe)
        var_74_1.b = 6
        char* edx_3 = &var_20
        
        if (var_c_1 u>= 0x10)
            edx_3 = var_20.d
        
        int32_t eax_19 = (*(*esi_2 + 0x24))(edx_3)
        struct common::CEXTreeReader::VTable* const var_8c = &common::CEXTreeReader::`vftable'
        int32_t var_88_2 = eax_19
        var_74_1.b = 7
        bool cond:4_1 = sub_511d60(arg1, eax_7, eax_9, &var_8c, var_9c, arg4) == 0
        var_74_1.b = 5
        
        if (var_c_1 u>= 0x10)
            sub_403160(var_20.d, var_c_1 + 1, 1)
        
        char var_69_2
        
        if (cond:4_1 == 0)
            int32_t var_24_1 = 0xf
            int32_t var_28_1 = 0
            var_38.b = 0
            sub_403490(&var_38, 0x75d2f2, nullptr)
            var_74_1.b = 9
            int32_t var_c_2 = 0xf
            int32_t var_10_2 = 0
            var_20 = 0
            sub_403490(&var_20, 0x7667b8, 4)
            var_74_1.b = 0xa
            var_74_1.b = 0xb
            char var_50
            sub_510970(arg1, sub_403b00(&var_94, &var_50, &var_20, &var_38))
            int32_t var_3c
            
            if (var_3c u>= 0x10)
                sub_403160(var_50.d, var_3c + 1, 1)
            
            int32_t var_3c_1 = 0xf
            int32_t var_40_1 = 0
            var_50 = 0
            
            if (var_c_2 u>= 0x10)
                sub_403160(var_20.d, var_c_2 + 1, 1)
            
            var_74_1.b = 5
            int32_t var_c_3 = 0xf
            int32_t var_10_3 = 0
            var_20 = 0
            
            if (var_24_1 u>= 0x10)
                sub_403160(var_38, var_24_1 + 1, 1)
            
            struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** 
                var_24_2 = 0xf
            int32_t var_28_2 = 0
            var_38.b = 0
            sub_403490(&var_38, 0x75d2f1, nullptr)
            var_74_1.b = 0xc
            int32_t var_c_4 = 0xf
            int32_t var_10_4 = 0
            var_20 = 0
            sub_403490(&var_20, 0x7667ac, 8)
            var_74_1.b = 0xd
            char* eax_29 = sub_403b00(&var_94, &var_50, &var_20, &var_38)
            var_74_1.b = 0xe
            
            if (&arg1[0x11] != eax_29)
                sub_403590(&arg1[0x11], eax_29, 0, 0xffffffff)
            
            if (var_3c_1 u>= 0x10)
                sub_403160(var_50.d, var_3c_1 + 1, 1)
            
            int32_t var_3c_2 = 0xf
            int32_t var_40_2 = 0
            var_50 = 0
            
            if (var_c_4 u>= 0x10)
                sub_403160(var_20.d, var_c_4 + 1, 1)
            
            int32_t var_c_5 = 0xf
            int32_t var_10_5 = 0
            var_20 = 0
            
            if (var_24_2 u>= 0x10)
                sub_403160(var_38, var_24_2 + 1, 1)
            
            ebx_1 = ebx_1
            var_69_2 = 1
        else
            var_69_2 = 0
        
        int32_t var_74_2 = 0xf
        
        if (ebx_1 != 0)
            (*ebx_1)->vFunc_1()
        
        result.b = var_69_2
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_70)
return result
