// 函数: sub_4bb670
// 地址: 0x4bb670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_732904
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
(**data_7fcb70)(eax_2)
int32_t* esi = data_7fcb70
int32_t result

if (esi != 0)
    struct common::CEXReader::VTable* const var_94_1 = &common::CEXReader::`vftable'
    int32_t* var_90_1 = esi
    (**esi)()
    int32_t var_8_1 = 0
    (*(*esi + 4))()
    int32_t* edx_1 = &data_7fce6c
    
    if (data_7fce80 u>= 0x10)
        edx_1 = data_7fce6c
    
    int32_t* eax_7 = (*(esi[1] + 0x24))(edx_1)
    struct common::CEXTreeReader::VTable* const var_84
    int32_t eax_9
    int32_t edi_1
    
    if (eax_7 != 0)
        var_84 = &common::CEXTreeReader::`vftable'
        var_8_1.b = 2
        eax_9 = (*(*eax_7 + 0x18))()
        edi_1 = 0
    
    int32_t* ebx
    
    if (eax_7 == 0 || eax_9 s<= 0)
    label_4bb858:
        ebx.b = 1
    else
        struct common::CEXTableReader::VTable* const var_8c = &common::CEXTableReader::`vftable'
        
        while (true)
            void** var_2c
            sub_403e80(&var_84, &var_2c, edi_1)
            int128_t var_6c = zx.o(0)
            var_8_1.b = 4
            int32_t var_18
            int32_t eax_10
            
            if (eax_7 != 0)
                void** edx_2 = &var_2c
                
                if (var_18 u>= 0x10)
                    edx_2 = var_2c
                
                eax_10 = (*(*eax_7 + 0x28))(edx_2)
            else
                eax_10 = 0
            
            int32_t var_88_1 = eax_10
            var_8_1.b = 5
            bool cond:2_1 = sub_4bafb0(&var_6c, &var_8c) == 0
            var_8_1.b = 4
            var_8c = &common::CEXTableReader::`vftable'
            void** var_a8_5 = &var_2c
            
            if (cond:2_1 != 0)
                void* var_5c
                int32_t* eax_26 = sub_419600(&var_2c, 0x762000, &var_5c, var_a8_5)
                var_8_1.b = 6
                var_8_1.b = 7
                void* var_44
                sub_45aae0(sub_4175e0(eax_26, eax_26, &var_44, U"\n"))
                int32_t var_30
                
                if (var_30 u>= 0x10)
                    sub_403160(var_44, var_30 + 1, 1)
                
                int32_t var_48
                
                if (var_48 u>= 0x10)
                    sub_403160(var_5c, var_48 + 1, 1)
                
                void* esi_3 = var_6c:4.d
                
                if (esi_3 != 0)
                    sub_403160(esi_3, (var_6c:0xc.d - esi_3) s/ 0x64, 0x64)
                
                if (var_18 u>= 0x10)
                    sub_403160(var_2c, var_18 + 1, 1)
                
                ebx.b = 0
                break
            
            void** eax_14
            int32_t* ecx_9
            eax_14, ecx_9 = sub_432330(arg1, var_a8_5)
            void** esi_1 = eax_14
            char eax_16
            
            if (esi_1 != *arg1)
                eax_16, ecx_9 = sub_412ca0(&var_2c, &esi_1[4])
            
            if (esi_1 == *arg1 || eax_16 != 0)
                int32_t* var_a8_7 = ecx_9
                void** var_70 = &var_2c
                void*** var_ac_3 = &var_70
                int32_t* eax_17 = sub_4bc070(ecx_9)
                void** var_74
                sub_4bc140(arg1, &var_74, esi_1, &eax_17[4], eax_17)
                esi_1 = var_74
            
            esi_1[0xa] = var_6c.d
            sub_4bb930(&esi_1[0xb], &var_6c:4)
            void* esi_2 = var_6c:4.d
            
            if (esi_2 != 0)
                sub_403160(esi_2, (var_6c:0xc.d - esi_2) s/ 0x64, 0x64)
                var_6c:4.d = 0
                var_6c:8.d = 0
                var_6c:0xc.d = 0
            
            var_8_1.b = 2
            
            if (var_18 u>= 0x10)
                sub_403160(var_2c, var_18 + 1, 1)
            
            edi_1 += 1
            
            if (edi_1 s>= eax_9)
                goto label_4bb858
    
    int32_t var_8_2 = 9
    (*(*esi + 4))()
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
