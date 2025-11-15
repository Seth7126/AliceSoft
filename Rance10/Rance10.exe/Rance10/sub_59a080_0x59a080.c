// 函数: sub_59a080
// 地址: 0x59a080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e323
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_3dc = ebx
int32_t var_3e8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_3c8
sub_578410(&var_3c8)
int32_t var_8_1 = 0
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
var_8_1.b = 1
void var_3d0

if (sub_5de3d0(&var_48, &var_3d0) == 0)
    ebx.b = 0
else
    void var_3c0
    sub_403590(&var_3c0, &var_48, 0, 0xffffffff)
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_403490(&var_30, U"===", 1)
    var_8_1.b = 2
    var_8_1.b = 1
    ebx.b = sub_59f280(arg2, &var_30) == 0
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
    
    if (ebx.b != 0)
        ebx.b = 0
    else
        sub_403360(&var_30, U"{%")
        var_8_1.b = 3
        var_8_1.b = 1
        ebx.b = sub_59f280(arg2, &var_30) == 0
        
        if (var_1c_1 u>= 0x10)
            sub_403160(var_30.d, var_1c_1 + 1, 1)
        
        if (ebx.b != 0)
            ebx.b = 0
        else
            while (true)
                int32_t var_1c_2 = 0xf
                int32_t var_20_2 = 0
                var_30 = 0
                var_8_1.b = 4
                void var_3d4
                
                if (sub_5de3d0(&var_30, &var_3d4) == 0)
                    ebx.b = 0
                else
                    if (sub_407560(&var_30, 0x768850) != 0)
                        var_8_1.b = 1
                        
                        if (var_1c_2 u>= 0x10)
                            sub_403160(var_30.d, var_1c_2 + 1, 1)
                        
                        sub_5a4220(arg1 + 4, &var_3c8)
                        ebx.b = 1
                        break
                    
                    char eax_13
                    
                    if (sub_407560(&var_30, 0x76884c) == 0)
                        if (sub_407560(&var_30, 0x768844) != 0)
                            eax_13 = sub_59b920(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x7689b0) != 0)
                            eax_13 = sub_59bb40(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x7689a0) != 0)
                            eax_13 = sub_59bcc0(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768994) != 0)
                            eax_13 = sub_59d360(arg2, &var_3c8, sub_578c80)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768988) != 0)
                            eax_13 = sub_59d360(arg2, &var_3c8, sub_578c90)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x7689e0) != 0)
                            eax_13 = sub_59d360(arg2, &var_3c8, sub_578ca0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x7689d0) != 0)
                            eax_13 = sub_59bea0(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        char eax_21 = sub_407560(&var_30, 0x7689c8)
                        char eax_22
                        
                        if (eax_21 == 0)
                            eax_22 = sub_407560(&var_30, 0x7689bc)
                        
                        if (eax_21 != 0 || eax_22 != 0)
                            eax_13 = sub_59c080(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768a1c) != 0)
                            void var_124
                            eax_13 = sub_59c710(arg2, &var_124)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768a0c) != 0)
                            void var_118
                            eax_13 = sub_59c710(arg2, &var_118)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x7689fc) != 0)
                            void var_10c
                            eax_13 = sub_59c710(arg2, &var_10c)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x7689ec) != 0)
                            void var_100
                            eax_13 = sub_59c710(arg2, &var_100)
                            goto label_59b1aa
                        
                        char eax_27
                        int32_t* ecx_24
                        eax_27, ecx_24 = sub_407560(&var_30, 0x768a64)
                        
                        if (eax_27 != 0)
                            int32_t* var_3ec_10 = ecx_24
                            void var_f4
                            void* var_3f0_16 = &var_f4
                            eax_13 = sub_5a56a0(arg2, ecx_24)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768a54) != 0)
                            eax_13 = sub_59ce40(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        char eax_29
                        int32_t* ecx_28
                        eax_29, ecx_28 = sub_407560(&var_30, 0x768a40)
                        
                        if (eax_29 != 0)
                            int32_t* var_3ec_12 = ecx_28
                            void var_dc
                            void* var_3f0_18 = &var_dc
                            eax_13 = sub_5a5800(arg2, ecx_28)
                            goto label_59b1aa
                        
                        char eax_30
                        int32_t* ecx_31
                        eax_30, ecx_31 = sub_407560(&var_30, 0x768a2c)
                        
                        if (eax_30 != 0)
                            int32_t* var_3ec_13 = ecx_31
                            void var_d0
                            void* var_3f0_19 = &var_d0
                            eax_13 = sub_5a5960(arg2, ecx_31)
                            goto label_59b1aa
                        
                        char eax_31
                        int32_t* ecx_34
                        eax_31, ecx_34 = sub_407560(&var_30, 0x76889c)
                        
                        if (eax_31 != 0)
                            int32_t* var_3ec_14 = ecx_34
                            void var_c4
                            void* var_3f0_20 = &var_c4
                            eax_13 = sub_5a5800(arg2, ecx_34)
                            goto label_59b1aa
                        
                        char eax_32
                        int32_t* ecx_37
                        eax_32, ecx_37 = sub_407560(&var_30, 0x76887c)
                        
                        if (eax_32 != 0)
                            int32_t* var_3ec_15 = ecx_37
                            void var_b8
                            void* var_3f0_21 = &var_b8
                            eax_13 = sub_5a5960(arg2, ecx_37)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768870) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_578e40)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768864) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_578e50)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x7688ec) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_578e60)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x7688dc) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_578e70)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x7688cc) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_578e80)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x7688bc) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_578e90)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768930) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_578ea0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768920) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_578eb0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768910) != 0)
                            eax_13 = sub_59d190(arg2, &var_3c8, sub_578ec0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x7688fc) != 0)
                            eax_13 = sub_59d190(arg2, &var_3c8, sub_578ed0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768974) != 0)
                            eax_13 = sub_59d190(arg2, &var_3c8, sub_578ee0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768960) != 0)
                            eax_13 = sub_59d190(arg2, &var_3c8, sub_578ef0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768950) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_578f00)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768940) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_578f10)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768b80) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_578f20)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768b74) != 0)
                            eax_13 = sub_59daf0(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768b64) != 0)
                            eax_13 = sub_59dde0(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768b58) != 0)
                            eax_13 = sub_59d190(arg2, &var_3c8, sub_579150)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768bb4) != 0)
                            eax_13 = sub_59d190(arg2, &var_3c8, sub_579160)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768ba8) != 0)
                            eax_13 = sub_59dfd0(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768b9c) != 0)
                            eax_13 = sub_59d670(arg2, &var_3c8, sub_5791d0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768b90) != 0)
                            eax_13 = sub_59d670(arg2, &var_3c8, sub_5791f0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768bf4) != 0)
                            eax_13 = sub_59d670(arg2, &var_3c8, sub_579210)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768be4) != 0)
                            eax_13 = sub_59e0e0(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768bdc) != 0)
                            eax_13 = sub_59d280(arg2, &var_3c8, sub_578e30)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768bc0) != 0)
                            eax_13 = sub_59e780(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768c5c) != 0)
                            eax_13 = sub_59e880(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768c44) != 0)
                            eax_13 = sub_59dce0(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768c24) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_579130)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768c04) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_579140)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768aa0) != 0)
                            eax_13 = sub_59d360(arg2, &var_3c8, sub_579190)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768a90) != 0)
                            eax_13 = sub_59e3c0(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768a80) != 0)
                            eax_13 = sub_59e500(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768a70) != 0)
                            eax_13 = sub_59e640(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768aec) != 0)
                        label_59b196:
                            eax_13 = sub_59e2a0(arg2)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768adc) != 0)
                            goto label_59b196
                        
                        if (sub_407560(&var_30, 0x768acc) != 0)
                            goto label_59b196
                        
                        if (sub_407560(&var_30, 0x768abc) != 0)
                            goto label_59b196
                        
                        if (sub_407560(&var_30, 0x768b20) != 0)
                            goto label_59b196
                        
                        if (sub_407560(&var_30, 0x768b10) != 0)
                            goto label_59b196
                        
                        if (sub_407560(&var_30, 0x768b04) != 0)
                            eax_13 = sub_59e980(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        char eax_74
                        int32_t ecx_81
                        eax_74, ecx_81 = sub_407560(&var_30, 0x768afc)
                        
                        if (eax_74 != 0)
                            int32_t var_3ec_27 = ecx_81
                            eax_13 = sub_59d450(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768b50) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_578fd0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768b48) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_578fe0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768b3c) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_578ff0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768b30) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_579000)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768d94) != 0)
                            eax_13 = sub_59d790(arg2, &var_3c8, sub_579010)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768d88) != 0)
                            eax_13 = sub_59d190(arg2, &var_3c8, sub_579020)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768d80) != 0)
                            eax_13 = sub_59d360(arg2, &var_3c8, sub_579030)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768d70) != 0)
                            eax_13 = sub_59d360(arg2, &var_3c8, sub_579050)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768dd0) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_579070)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768dc0) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_579080)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768db0) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_579090)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768da0) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_5790a0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768e10) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_5790b0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768e00) != 0)
                            eax_13 = sub_59d540(arg2, &var_3c8, sub_5790c0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768df0) != 0)
                            eax_13 = sub_59d190(arg2, &var_3c8, sub_5790d0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768de0) != 0)
                            eax_13 = sub_59d190(arg2, &var_3c8, sub_5790e0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768e44) != 0)
                            eax_13 = sub_59d190(arg2, &var_3c8, sub_5790f0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768e38) != 0)
                            eax_13 = sub_59d790(arg2, &var_3c8, sub_579100)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768e2c) != 0)
                            eax_13 = sub_59d790(arg2, &var_3c8, sub_579110)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768e20) != 0)
                            eax_13 = sub_59d790(arg2, &var_3c8, sub_579120)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768ca0) != 0)
                            eax_13 = sub_59ea60(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768c98) != 0)
                            eax_13 = sub_59ec90(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768c8c) != 0)
                            eax_13 = sub_59d360(arg2, &var_3c8, sub_578f30)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768c78) != 0)
                            eax_13 = sub_59d360(arg2, &var_3c8, sub_578f50)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768cdc) != 0)
                            eax_13 = sub_59ed90(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768cc8) != 0)
                            eax_13 = sub_59d670(arg2, &var_3c8, sub_578f70)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768cb8) != 0)
                            eax_13 = sub_59d360(arg2, &var_3c8, sub_578f90)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768cac) != 0)
                            eax_13 = sub_59ef20(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768d20) != 0)
                            eax_13 = sub_59d670(arg2, &var_3c8, sub_578fb0)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768d0c) != 0)
                            eax_13 = sub_59f1a0(arg2, &var_3c8)
                            goto label_59b1aa
                        
                        if (sub_407560(&var_30, 0x768d00) == 0)
                            if (sub_407560(&var_30, 0x768cec) != 0)
                                eax_13 = sub_59d190(arg2, &var_3c8, sub_5794e0)
                                goto label_59b1aa
                            
                            if (sub_407560(&var_30, 0x768d60) != 0)
                                eax_13 = sub_59d280(arg2, &var_3c8, sub_5794f0)
                                goto label_59b1aa
                            
                            if (sub_407560(&var_30, 0x768d48) != 0)
                                eax_13 = sub_59d190(arg2, &var_3c8, sub_579500)
                                goto label_59b1aa
                            
                            if (sub_407560(&var_30, 0x768d3c) != 0)
                                eax_13 = sub_59d280(arg2, &var_3c8, sub_579510)
                                goto label_59b1aa
                            
                            if (sub_407560(&var_30, 0x768d30) != 0)
                                eax_13 = sub_59d190(arg2, &var_3c8, sub_579520)
                                goto label_59b1aa
                            
                            if (sub_407560(&var_30, "ParentFolderUID") != 0)
                                eax_13 = sub_59d280(arg2, &var_3c8, sub_579540)
                                goto label_59b1aa
                            
                            void var_78
                            
                            if (sub_407560(&var_30, 0x768f60) != 0)
                            label_59b15d:
                                sub_403360(&var_78, U"=")
                                var_8_1.b = 6
                                var_8_1.b = 4
                                ebx.b = sub_59f280(arg2, &var_78) == 0
                                sub_403320(&var_78)
                                
                                if (ebx.b == 0)
                                    void var_3d8
                                    eax_13 = sub_5de8c0(&var_3d8)
                                    goto label_59b1aa
                                
                                ebx.b = 0
                            else
                                if (sub_407560(&var_30, 0x768f50) != 0)
                                    goto label_59b15d
                                
                                if (sub_407560(&var_30, 0x768f3c) != 0)
                                    goto label_59b15d
                                
                                char* var_3cc
                                
                                if (sub_407560(&var_30, 0x768fa8) != 0)
                                label_59b119:
                                    sub_403360(&var_78, U"=")
                                    var_8_1.b = 7
                                    var_8_1.b = 4
                                    ebx.b = sub_59f280(arg2, &var_78) == 0
                                    sub_403320(&var_78)
                                    
                                    if (ebx.b == 0)
                                        eax_13 = PDB1::ResetGUID(&var_3cc)
                                        goto label_59b1aa
                                    
                                    ebx.b = 0
                                else
                                    if (sub_407560(&var_30, 0x768f98) != 0)
                                        goto label_59b119
                                    
                                    if (sub_407560(&var_30, 0x768f88) != 0)
                                        goto label_59b119
                                    
                                    if (sub_407560(&var_30, 0x769000) != 0)
                                        goto label_59b119
                                    
                                    if (sub_407560(&var_30, 0x768ff4) != 0)
                                        goto label_59b119
                                    
                                    char* eax_125 = &var_30
                                    
                                    if (var_1c_2 u>= 0x10)
                                        eax_125 = var_30.d
                                    
                                    var_3cc = eax_125
                                    sub_403360(&var_78, 0x768fbc)
                                    var_8_1.b = 8
                                    var_8_1.b = 9
                                    void var_60
                                    ebx.b =
                                        sub_5e01e0(sub_409240(&var_3cc, &var_78, &var_60, &var_3cc))
                                    sub_403320(&var_60)
                                    sub_403320(&var_78)
                        else
                            int32_t var_54 = 0
                            int32_t var_50_1 = 0
                            int32_t var_4c_1 = 0
                            var_8_1.b = 5
                            
                            if (sub_59d920(arg2, &var_54) == 0)
                                sub_4043e0(&var_54)
                            else
                                void var_94
                                sub_4274a0(&var_94, &var_54)
                                sub_4043e0(&var_54)
                                sub_403320(&var_30)
                                continue
                            
                            ebx.b = 0
                    else
                        eax_13 = sub_59d280(arg2, &var_3c8, sub_578c70)
                    label_59b1aa:
                        
                        if (eax_13 == 0)
                            ebx.b = 0
                        else
                            sub_403320(&var_30)
                            continue
                
                if (var_1c_2 u< 0x10)
                    break
                
                sub_403160(var_30.d, var_1c_2 + 1, 1)
                break

if (var_34 u>= 0x10)
    sub_403160(var_48.d, var_34 + 1, 1)

int32_t var_34_1 = 0xf
int32_t var_38_1 = 0
var_48 = 0
sub_59b2c0(&var_3c8)
char* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
