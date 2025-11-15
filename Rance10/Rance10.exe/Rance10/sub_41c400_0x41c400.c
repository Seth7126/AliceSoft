// 函数: sub_41c400
// 地址: 0x41c400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??$raise_error@Vrounding_error@math@boost@@O@detail@policies@math@boost@@YAXPBD0ABO@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg2

if (result == 0x700)
    result = arg3
    *(arg1 + 0xc) = result
else if (result == 0x701)
    *(arg1 + 0xc) = 0
else if (result == 0x702)
    struct fileimage::CFileImageMaker::VTable* const var_6c = &fileimage::CFileImageMaker::`vftable'
    void* var_68 = nullptr
    char* var_64_1 = nullptr
    int32_t var_60_1 = 0
    int32_t var_8_1 = 0
    sub_48b140(arg1)
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = muls.dp.d(0x4ec4ec4f, data_7fcc9c - data_7fcc98)
    int32_t edx_2 = edx_1 s>> 4
    int32_t esi_3 = (edx_2 u>> 0x1f) + edx_2
    sub_6ca100(&var_6c, esi_3)
    int32_t ebx_1 = 0
    int32_t var_7c_1 = 0
    
    if (esi_3 s> 0)
        char* edi_1 = nullptr
        char* var_80_1 = nullptr
        
        do
            int32_t edx_4
            int32_t esi_4
            
            if (ebx_1 s>= 0)
                esi_4 = data_7fcc98
                int32_t eax_4
                int32_t edx_3
                edx_3:eax_4 = muls.dp.d(0x4ec4ec4f, data_7fcc9c - esi_4)
                edx_4 = edx_3 s>> 4
            
            void* eax_8
            
            if (ebx_1 s< 0 || ebx_1 s>= (edx_4 u>> 0x1f) + edx_4)
                eax_8 = 0xffffffff
            else
                eax_8 = *(edi_1 + esi_4 + 0x20)
            
            int32_t* var_78 = nullptr
            int32_t var_74_1 = 0
            int32_t var_70_1 = 0
            var_8_1.b = 1
            void* var_5c_1 = sub_41c9c0(eax_8, &var_78)
            int32_t edx_6
            int32_t esi_5
            
            if (ebx_1 s>= 0)
                esi_5 = data_7fcc98
                int32_t eax_10
                int32_t edx_5
                edx_5:eax_10 = muls.dp.d(0x4ec4ec4f, data_7fcc9c - esi_5)
                edx_6 = edx_5 s>> 4
            
            void* eax_9
            
            if (ebx_1 s< 0 || ebx_1 s>= (edx_6 u>> 0x1f) + edx_6)
                eax_9.b = 0
            else
                eax_9.b = edi_1[esi_5]
            
            bool var_55 = eax_9.b != 0
            sub_4263a0(&var_68, &var_55)
            int32_t edx_8
            int32_t esi_6
            
            if (ebx_1 s>= 0)
                esi_6 = data_7fcc98
                int32_t eax_13
                int32_t edx_7
                edx_7:eax_13 = muls.dp.d(0x4ec4ec4f, data_7fcc9c - esi_6)
                edx_8 = edx_7 s>> 4
            
            int32_t eax_17
            
            if (ebx_1 s< 0 || ebx_1 s>= (edx_8 u>> 0x1f) + edx_8)
                eax_17 = 0xffffffff
            else
                eax_17 = *(edi_1 + esi_6 + 4)
            
            sub_6ca100(&var_6c, eax_17)
            int32_t edx_10
            void* esi_7
            
            if (ebx_1 s>= 0)
                esi_7 = data_7fcc98
                int32_t eax_19
                int32_t edx_9
                edx_9:eax_19 = muls.dp.d(0x4ec4ec4f, data_7fcc9c - esi_7)
                edx_10 = edx_9 s>> 4
            
            void* edx_12
            
            if (ebx_1 s< 0 || ebx_1 s>= (edx_10 u>> 0x1f) + edx_10)
                edx_12 = &data_75cea7
            else
                edx_12 = esi_7 + 8 + edi_1
                
                if (*(edx_12 + 0x14) u>= 0x10)
                    edx_12 = *edx_12
            
            int32_t var_18_1 = 0xf
            void* var_1c_1 = nullptr
            char var_2c = 0
            void* ecx_13
            
            if (*edx_12 != 0)
                char* ecx_14 = edx_12
                void* eax_18
                
                do
                    eax_18.b = *ecx_14
                    ecx_14 = &ecx_14[1]
                while (eax_18.b != 0)
                ecx_13 = ecx_14 - &ecx_14[1]
            else
                ecx_13 = nullptr
            
            sub_403490(&var_2c, edx_12, ecx_13)
            var_8_1.b = 2
            char* esi_9 = &var_2c
            char* edx_13 = &var_2c
            
            if (var_18_1 u>= 0x10)
                esi_9 = var_2c.d
            
            if (var_18_1 u>= 0x10)
                edx_13 = var_2c.d
            
            int32_t var_a4_6 = 0.d
            sub_6ca200(&var_68, var_64_1, edx_13, var_1c_1 + esi_9)
            var_55 = false
            sub_4263a0(&var_68, &var_55)
            var_8_1.b = 1
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            sub_6ca100(&var_6c, var_5c_1)
            int32_t edx_15
            int32_t esi_10
            
            if (ebx_1 s>= 0)
                esi_10 = data_7fcc98
                int32_t eax_27
                int32_t edx_14
                edx_14:eax_27 = muls.dp.d(0x4ec4ec4f, data_7fcc9c - esi_10)
                edx_15 = edx_14 s>> 4
            
            void* eax_26
            
            if (ebx_1 s< 0 || ebx_1 s>= (edx_15 u>> 0x1f) + edx_15)
                eax_26.b = 0
            else
                eax_26.b = edi_1[esi_10 + 0x24]
            
            var_55 = eax_26.b != 0
            sub_4263a0(&var_68, &var_55)
            int32_t edx_17
            int32_t esi_11
            
            if (ebx_1 s>= 0)
                esi_11 = data_7fcc98
                int32_t eax_30
                int32_t edx_16
                edx_16:eax_30 = muls.dp.d(0x4ec4ec4f, data_7fcc9c - esi_11)
                edx_17 = edx_16 s>> 4
            
            int32_t xmm0_1
            
            if (ebx_1 s< 0 || ebx_1 s>= (edx_17 u>> 0x1f) + edx_17)
                xmm0_1 = 0xbf800000
            else
                xmm0_1 = *(edi_1 + esi_11 + 0x28)
            
            sub_6ca100(&var_6c, xmm0_1)
            int32_t edx_19
            int32_t esi_12
            
            if (ebx_1 s>= 0)
                esi_12 = data_7fcc98
                int32_t eax_34
                int32_t edx_18
                edx_18:eax_34 = muls.dp.d(0x4ec4ec4f, data_7fcc9c - esi_12)
                edx_19 = edx_18 s>> 4
            
            int32_t eax_38
            
            if (ebx_1 s< 0 || ebx_1 s>= (edx_19 u>> 0x1f) + edx_19)
                eax_38 = 0xffffffff
            else
                eax_38 = *(edi_1 + esi_12 + 0x2c)
            
            sub_6ca100(&var_6c, eax_38)
            int32_t edx_21
            int32_t esi_13
            
            if (ebx_1 s>= 0)
                esi_13 = data_7fcc98
                int32_t eax_39
                int32_t edx_20
                edx_20:eax_39 = muls.dp.d(0x4ec4ec4f, data_7fcc9c - esi_13)
                edx_21 = edx_20 s>> 4
            
            int32_t eax_43
            
            if (ebx_1 s< 0 || ebx_1 s>= (edx_21 u>> 0x1f) + edx_21)
                eax_43 = 0xffffffff
            else
                eax_43 = *(edi_1 + esi_13 + 0x30)
            
            sub_6ca100(&var_6c, eax_43)
            void* esi_15 = var_74_1 - var_78
            sub_6ca100(&var_6c, esi_15 s>> 2)
            int32_t* ecx_32 = var_78
            uint32_t eax_47 = (esi_15 + 3) u>> 2
            int32_t* esi_16 = ecx_32
            
            if (ecx_32 u> var_74_1)
                eax_47 = 0
            
            if (eax_47 != 0)
                int32_t ebx_2 = 0
                
                do
                    sub_6ca100(&var_6c, *esi_16)
                    ebx_2 += 1
                    esi_16 = &esi_16[1]
                while (ebx_2 != eax_47)
                
                ebx_1 = var_7c_1
                ecx_32 = var_78
            
            if (ecx_32 != 0)
                sub_403160(ecx_32, (var_70_1 - ecx_32) s>> 2, 4)
                var_78 = nullptr
                int32_t var_74_2 = 0
                int32_t var_70_2 = 0
            
            ebx_1 += 1
            edi_1 = &var_80_1[0x34]
            var_7c_1 = ebx_1
            var_80_1 = edi_1
        while (ebx_1 s< esi_3)
    
    struct win32only::CFileMapping::VTable* const var_54 = &win32only::CFileMapping::`vftable'
    int32_t result_1 = 0xf
    int32_t var_34_1 = 0
    char var_44_1 = 0
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 0
    int32_t var_48_1 = 0
    var_8_1.b = 3
    
    if (sub_41c8d0(&var_54, &var_6c) != 0)
        SendMessageA(*(arg1 + 0xc), 0x702, 0, 0)
    
    var_54 = &win32only::CFileMapping::`vftable'
    sub_6cdf10(&var_54)
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_44_1.d, result + 1, 1)
    
    void* ecx_35 = var_68
    int32_t var_30_1 = 0xf
    int32_t var_34_2 = 0
    char var_44_2 = 0
    
    if (ecx_35 != 0)
        result = sub_403160(ecx_35, var_60_1 - ecx_35, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
