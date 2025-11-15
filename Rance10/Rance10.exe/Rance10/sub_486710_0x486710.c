// 函数: sub_486710
// 地址: 0x486710
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ee28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_74 = 0
int32_t* result
int32_t* var_60
void var_44
void var_2c
HANDLE eax_15
int32_t eax_38
struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** eax_48

if (arg2 u> 0x26)
    sub_602420(arg1)
    result = arg1
else
    switch (arg2)
        case 0
            *arg3
            char eax_4 = sub_602ea0()
            void* eax_5 = data_7fcb6c
            
            if (eax_5 != 0 && *(eax_5 + 7) != eax_4)
                void* ecx_1 = *(eax_5 + 0x930)
                *(eax_5 + 7) = eax_4
                
                if (ecx_1 != 0)
                    *(ecx_1 + 0x18) = eax_4
                    sub_4865c0(ecx_1)
            
            *arg1 = 0
            result = arg1
        case 1
            *arg3
            int32_t eax_6 = sub_602ff0()
            int32_t eax_7 = sub_602ff0()
            void* ecx_5 = *(data_7fcb6c + 0x934)
            
            if (ecx_5 != 0)
                int32_t eax_8 = sub_47fad0(ecx_5 + 0x78, eax_7, eax_6)
                *arg1 = 0xa
                arg1[1] = eax_8
                result = arg1
            else
            label_4867ba:
                *arg1 = 0xa
                arg1[1] = 0
                result = arg1
        case 2
            *arg3
            int32_t eax_9 = sub_602ff0()
            void* ecx_9 = *(data_7fcb6c + 0x934)
            
            if (ecx_9 != 0)
                bool cond:0_1 = sub_47fad0(ecx_9 + 0x78, eax_9, eax_9) != eax_9
                *arg1 = 0x2f
                int32_t eax_10
                eax_10.b = cond:0_1
                arg1[1] = zx.d(eax_10.b)
            else
                *arg1 = 0x2f
                arg1[1] = 0
            
            result = arg1
        case 3
            *arg3
            var_60.b = sub_602ea0()
            int32_t eax_13 = sub_602ff0()
            eax_15 = sub_487ad0(sub_602ff0(), eax_13, var_60.b)
        label_486856:
            *arg1 = 0x2f
            int32_t ecx_14
            ecx_14.b = eax_15.b != 0
            arg1[1] = ecx_14
            result = arg1
        case 4
            *arg3
            char* eax_16 = sub_603290(&var_44)
            int32_t var_8_1 = 0
            *arg3
            int32_t eax_17 = sub_602ff0()
            void* ecx_19 = *(data_7fcb6c + 0x934)
            
            if (ecx_19 != 0)
                eax_17 = sub_488180(ecx_19, eax_17, eax_16)
            else
                eax_17.b = 0
            
            *arg1 = 0x2f
            int32_t ecx_20
            ecx_20.b = eax_17.b != 0
            arg1[1] = ecx_20
            sub_403320(&var_44)
            result = arg1
        case 5
            *arg3
            sub_602ff0()
            eax_15 = sub_48aeb0()
            goto label_486856
        case 6
            *arg3
            sub_602ff0()
            eax_15 = sub_48aed0()
            goto label_486856
        case 7
            *arg3
            int32_t eax_20 = sub_602ff0()
            int32_t eax_21 = sub_602ff0()
            void* ecx_29 = *(data_7fcb6c + 0x934)
            
            if (ecx_29 == 0)
                goto label_4867ba
            
            int32_t eax_22 = sub_47fad0(ecx_29 + 0x5c, eax_21, eax_20)
            *arg1 = 0xa
            arg1[1] = eax_22
            result = arg1
        case 8
            *arg3
            eax_15 = sub_602ff0()
            void** ecx_33 = *(data_7fcb6c + 0x934)
            
            if (ecx_33 != 0)
                HANDLE var_88_7 = eax_15
                eax_15 = sub_4882a0(ecx_33)
                goto label_486856
            
        label_486938:
            eax_15.b = 0
            goto label_486856
        case 9
            *arg3
            char* eax_23 = sub_603290(&var_2c)
            int32_t var_8_2 = 1
            *arg3
            char* eax_24 = sub_603290(&var_44)
            var_8_2.b = 2
            *arg3
            var_60.b = sub_602ea0()
            struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** eax_26 =
                sub_602ff0()
            void* esi_7 = *(data_7fcb6c + 0x934)
            
            if (esi_7 != 0)
                int32_t* var_88_10 = var_60
                eax_26 = sub_488300(esi_7, sub_47ffe0(esi_7 + 0x5c, eax_26), eax_24, eax_23)
            else
                eax_26.b = 0
            
            *arg1 = 0x2f
            int32_t ecx_43
            ecx_43.b = eax_26.b != 0
            arg1[1] = ecx_43
            sub_403320(&var_44)
            sub_403320(&var_2c)
            result = arg1
        case 0xa
            *arg3
            eax_15 = sub_48aef0(sub_602ff0())
            goto label_486856
        case 0xb
            *arg3
            eax_15 = sub_602ff0()
            void** ecx_50 = *(data_7fcb6c + 0x934)
            
            if (ecx_50 == 0)
                goto label_486938
            
            HANDLE var_88_12 = eax_15
            eax_15 = sub_4883e0(ecx_50)
            goto label_486856
        case 0xc
            *arg3
            eax_15 = sub_602ff0()
            void** ecx_53 = *(data_7fcb6c + 0x934)
            
            if (ecx_53 == 0)
                goto label_486938
            
            HANDLE var_88_13 = eax_15
            eax_15 = sub_488480(ecx_53)
            goto label_486856
        case 0xd
            *arg3
            sub_602ff0()
            eax_15 = sub_48af10()
            goto label_486856
        case 0xe
            *arg3
            int32_t eax_30 = sub_602ff0()
            eax_15 = sub_48af30(sub_602ff0(), eax_30)
            goto label_486856
        case 0xf
            *arg3
            int32_t eax_32 = sub_602ff0()
            void** ecx_61 = *(data_7fcb6c + 0x934)
            
            if (ecx_61 == 0)
                goto label_4867ba
            
            int32_t var_88_14 = eax_32
            int32_t eax_33 = sub_488560(ecx_61)
            *arg1 = 0xa
            arg1[1] = eax_33
            result = arg1
        case 0x10
            *arg3
            eax_15 = sub_602ff0()
            void** ecx_64 = *(data_7fcb6c + 0x934)
            
            if (ecx_64 == 0)
                goto label_486938
            
            HANDLE var_88_15 = eax_15
            eax_15 = sub_4885d0(ecx_64)
            goto label_486856
        case 0x11
            *arg3
            eax_15 = sub_602ff0()
            void** ecx_67 = *(data_7fcb6c + 0x934)
            
            if (ecx_67 == 0)
                goto label_486938
            
            HANDLE var_88_16 = eax_15
            eax_15 = sub_488640(ecx_67)
            goto label_486856
        case 0x12
            *arg3
            eax_15 = sub_602ff0()
            void** ecx_70 = *(data_7fcb6c + 0x934)
            
            if (ecx_70 == 0)
                goto label_486938
            
            HANDLE var_88_17 = eax_15
            eax_15 = sub_4886b0(ecx_70)
            goto label_486856
        case 0x13
            int32_t var_68_2 = *arg3
            int32_t eax_35 = sub_602ff0()
            char eax_36 = sub_602ea0()
            int32_t xmm0_1 = sub_603140()
            int32_t eax_37 = sub_602ff0()
            eax_38 = sub_602ff0()
            void* ecx_77 = *(data_7fcb6c + 0x934)
            
            if (ecx_77 != 0)
                eax_38 = sub_488720(ecx_77, xmm0_1, eax_38, eax_37, eax_36, eax_35)
            else
                eax_38.b = 0
            
            goto label_486b7f
        case 0x14
            *arg3
            eax_15 = sub_602ff0()
            void** ecx_81 = *(data_7fcb6c + 0x934)
            
            if (ecx_81 == 0)
                goto label_486938
            
            HANDLE var_88_19 = eax_15
            eax_15 = sub_4887c0(ecx_81)
            goto label_486856
        case 0x15
            *arg3
            eax_15 = sub_602ff0()
            void** ecx_84 = *(data_7fcb6c + 0x934)
            
            if (ecx_84 == 0)
                goto label_486938
            
            HANDLE var_88_20 = eax_15
            eax_15 = sub_488830(ecx_84)
            goto label_486856
        case 0x16
            *arg3
            int32_t eax_39 = sub_602ff0()
            eax_15 = sub_602ff0()
            void** ecx_88 = *(data_7fcb6c + 0x934)
            
            if (ecx_88 == 0)
                goto label_486938
            
            int32_t var_88_21 = eax_39
            eax_15 = sub_4888b0(ecx_88, eax_15)
            goto label_486856
        case 0x17
            *arg3
            int32_t eax_40 = sub_602ff0()
            void** ecx_91 = *(data_7fcb6c + 0x934)
            
            if (ecx_91 == 0)
                goto label_4867ba
            
            int32_t var_88_22 = eax_40
            int32_t eax_41 = sub_488920(ecx_91)
            *arg1 = 0xa
            arg1[1] = eax_41
            result = arg1
        case 0x18
            *arg3
            int32_t eax_42 = sub_602ff0()
            void** ecx_94 = *(data_7fcb6c + 0x934)
            
            if (ecx_94 == 0)
                goto label_4867ba
            
            int32_t var_88_23 = eax_42
            int32_t eax_43 = sub_488990(ecx_94)
            *arg1 = 0xa
            arg1[1] = eax_43
            result = arg1
        case 0x19
            *arg3
            int32_t eax_44 = sub_602ff0()
            void** ecx_97 = *(data_7fcb6c + 0x934)
            
            if (ecx_97 == 0)
                goto label_4867ba
            
            int32_t var_88_24 = eax_44
            int32_t eax_45 = sub_488a00(ecx_97)
            *arg1 = 0xa
            arg1[1] = eax_45
            result = arg1
        case 0x1a
            *arg3
            char* eax_46 = sub_603290(&var_2c)
            int32_t var_8_3 = 3
            void* ecx_100 = *(data_7fcb6c + 0x934)
            
            if (ecx_100 != 0)
                eax_46 = sub_488e50(ecx_100 + 4, eax_46)
            else
                eax_46.b = 0
            
            *arg1 = 0x2f
            int32_t ecx_102
            ecx_102.b = eax_46.b != 0
            arg1[1] = ecx_102
            sub_403320(&var_2c)
            result = arg1
        case 0x1b
            *arg3
            char* eax_47 = sub_603290(&var_2c)
            int32_t var_8_4 = 4
            void* ecx_106 = *(data_7fcb6c + 0x934)
            
            if (ecx_106 == 0)
            label_486d0c:
                eax_48 = nullptr
                goto label_486d1c
            
            eax_48 = sub_488ce0(ecx_106 + 4, eax_47)
        label_486d1c:
            *arg1 = 0xa
            arg1[1] = eax_48
            sub_403320(&var_2c)
            result = arg1
        case 0x1c
            *arg3
            char* eax_49 = sub_603290(&var_2c)
            int32_t var_8_5 = 5
            void* ecx_111 = *(data_7fcb6c + 0x934)
            
            if (ecx_111 == 0)
                goto label_486d0c
            
            void* eax_50 = sub_488e10(ecx_111 + 4, eax_49)
            
            if (eax_50 != 0)
                eax_48 = *(eax_50 + 8)
            
            if (eax_50 == 0 || eax_48 == 0xffffffff)
                eax_48 = 2
            
            goto label_486d1c
        case 0x1d
            *arg3
            int32_t eax_51 = sub_602ff0()
            void* ecx_115 = *(data_7fcb6c + 0x930)
            int32_t xmm0_2
            
            if (ecx_115 == 0)
                xmm0_2 = 0x3f800000
            else if (*(ecx_115 + 0x18) != 0 || *(ecx_115 + 0x19) != 0)
                int32_t var_88_31 = eax_51
                xmm0_2 = sub_48a0e0(ecx_115 + 4)
            else
                xmm0_2 = (zx.o(0)).d
            
            *arg1 = 0xb
            arg1[1] = xmm0_2
            result = arg1
        case 0x1e
            *arg3
            int32_t eax_53 = sub_602ff0()
            int32_t eax_55
            uint32_t edx_4
            edx_4:eax_55 = muls.dp.d(sub_602ff0(), eax_53)
            *arg1 = 0xa
            arg1[1] = __alldiv(eax_55, edx_4, 0x3e8, 0)
            result = arg1
        case 0x1f
            int32_t eax_58 = (*(*(data_7fcb6c + 0xc) + 0x10))(eax_2)
            *arg1 = 0xa
            arg1[1] = eax_58
            result = arg1
        case 0x20
            int32_t* eax_59 = sub_603500(*arg3 + 0x10)
            eax_15 = sub_48af70(sub_602ff0(), eax_59)
            goto label_486856
        case 0x21
            int32_t* eax_61 = sub_603470(*arg3 + 0x10)
            eax_15 = sub_48afc0(sub_602ff0(), eax_61)
            goto label_486856
        case 0x22
            int32_t* eax_63 = sub_603470(*arg3 + 0x10)
            eax_15 = sub_48b000(sub_602ff0(), eax_63)
            goto label_486856
        case 0x23
            char* eax_65 = sub_603430(*arg3 + 0x10)
            eax_15 = sub_48b040(sub_602ff0(), eax_65)
            goto label_486856
        case 0x24
            *arg3
            void var_5c
            char* eax_67 = sub_603290(&var_5c)
            int32_t var_8_6 = 6
            *arg3
            char eax_69 = sub_48b080(sub_602ff0(), eax_67)
            *arg1 = 0x2f
            int32_t ecx_137
            ecx_137.b = eax_69 != 0
            arg1[1] = ecx_137
            sub_403320(&var_5c)
            result = arg1
        case 0x25
            *arg3
            int32_t eax_70 = sub_602ff0()
            eax_15 = sub_48b0c0(sub_602ff0(), eax_70)
            goto label_486856
        case 0x26
            *arg3
            int32_t* ebx
            ebx.b = sub_602ea0()
            int32_t eax_73
            int32_t edx_11
            eax_73, edx_11 = sub_602ff0()
            edx_11.b = ebx.b
            eax_38 = sub_48b100(eax_73, edx_11)
        label_486b7f:
            result = arg1
            int32_t ecx_78
            ecx_78.b = eax_38.b != 0
            *arg1 = 0x2f
            arg1[1] = ecx_78
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
