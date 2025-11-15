// 函数: sub_611160
// 地址: 0x611160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f110
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (arg1[0x7c].b != 0)
label_6111b6:
    int32_t* var_88
    int16_t arg_4
    long double x87_r0
    
    switch (zx.d(arg_4))
        case 0
            int32_t* eax_7 = arg1[0x74]
            int32_t ecx_1 = *eax_7
            arg1[0x74] = &eax_7[1]
            sub_405d30(&arg1[0x7d], ecx_1)
        case 1
            arg1[0x7f] -= 1
        case 2
            sub_612f00(arg1)
        case 3
            sub_612f70(arg1)
        case 4
            sub_405d30(&arg1[0x7d], arg1[0x58])
        case 5
            sub_405d30(&arg1[0x7d], *(arg1[0x284] - 4))
        case 6
            var_88 = &std::_Func_impl<class <lambda_f34f85bd9d8fbe6b081134f5de528e5e>,class std::allocator<int32_t>,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t>'}
            int32_t** var_64_7 = &var_88
            sub_613270(arg1, var_88)
        case 7
            var_88 = &std::_Func_impl<class <lambda_ae15cbdd5dc34194bd3caaf07516a9e2>,class std::allocator<int32_t>,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t>'}
            int32_t** var_64_8 = &var_88
            sub_613270(arg1, var_88)
        case 8
            var_88 = &std::_Func_impl<class <lambda_4310918f59e329649306a204b6777f0e>,class std::allocator<int32_t>,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t>'}
            int32_t** var_64_9 = &var_88
            sub_613270(arg1, var_88)
        case 9
            var_88 = &std::_Func_impl<class <lambda_eebbb7d956fb4743e7fe27e0d67869f7>,class std::allocator<int32_t>,int32_t,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t, int32_t>'}
            int32_t** var_64_10 = &var_88
            sub_613310(arg1, var_88)
        case 0xa
            var_88 = &std::_Func_impl<class <lambda_594db6c39c379ee67d7f4d4cf899cfbc>,class std::allocator<int32_t>,int32_t,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t, int32_t>'}
            int32_t** var_64_11 = &var_88
            sub_613310(arg1, var_88)
        case 0xb
            var_88 = &std::_Func_impl<class <lambda_2b80357d64084ab1f1a93f7313fa8d27>,class std::allocator<int32_t>,int32_t,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t, int32_t>'}
            int32_t** var_64_12 = &var_88
            sub_613310(arg1, var_88)
        case 0xc
            var_88 = &std::_Func_impl<class <lambda_cf975dc24f7584e9c803a21d89a31d77>,class std::allocator<int32_t>,int32_t,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t, int32_t>'}
            int32_t** var_64_13 = &var_88
            sub_613310(arg1, var_88)
        case 0xd
            var_88 = &std::_Func_impl<class <lambda_ed9f21e252dfdec39d568c86fe74180b>,class std::allocator<int32_t>,int32_t,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t, int32_t>'}
            int32_t** var_64_14 = &var_88
            sub_613310(arg1, var_88)
        case 0xe
            var_88 = &std::_Func_impl<class <lambda_cbf94f0cfa91ad27f1a141542367cbcc>,class std::allocator<int32_t>,int32_t,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t, int32_t>'}
            int32_t** var_64_15 = &var_88
            sub_613310(arg1, var_88)
        case 0xf
            var_88 = &std::_Func_impl<class <lambda_c5b65b476c9bf87ad3935f4678a5a6e3>,class std::allocator<int32_t>,int32_t,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t, int32_t>'}
            int32_t** var_64_16 = &var_88
            sub_613310(arg1, var_88)
        case 0x10
            var_88 = &std::_Func_impl<class <lambda_53b4fcbbb3c405b22a26d7dfaf0d764b>,class std::allocator<int32_t>,int32_t,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t, int32_t>'}
            int32_t** var_64_17 = &var_88
            sub_613310(arg1, var_88)
        case 0x11
            var_88 = &std::_Func_impl<class <lambda_46328bdc1a0d64426da00d391cff55be>,class std::allocator<int32_t>,int32_t,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t, int32_t>'}
            int32_t** var_64_18 = &var_88
            sub_613310(arg1, var_88)
        case 0x12
            var_88 = &std::_Func_impl<class <lambda_8d1a70d911171f536ae4b37067dc8d7c>,class std::allocator<int32_t>,int32_t,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t, int32_t>'}
            int32_t** var_64_19 = &var_88
            sub_613310(arg1, var_88)
        case 0x13
            var_88 = &std::_Func_impl<class <lambda_d551dec71fb64bc00d3124d426c7361a>,class std::allocator<int32_t>,int32_t,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t, int32_t>'}
            int32_t** var_64_20 = &var_88
            sub_613310(arg1, var_88)
        case 0x14
            var_88 = &std::_Func_impl<class <lambda_ca52c13665333d7f931370ef7908729d>,class std::allocator<int32_t>,int32_t,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t, int32_t>'}
            int32_t** var_64_21 = &var_88
            sub_613310(arg1, var_88)
        case 0x15
            var_88 = &std::_Func_impl<class <lambda_2a7765c284cc91eb8214fc30d1cb8c76>,class std::allocator<int32_t>,int32_t,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t, int32_t>'}
            int32_t** var_64_22 = &var_88
            sub_613310(arg1, var_88)
        case 0x16
            var_88 = &std::_Func_impl<class <lambda_d6ad7c1648bc72c8cb18f345b0ee82dd>,class std::allocator<int32_t>,int32_t,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t, int32_t>'}
            int32_t** var_64_23 = &var_88
            sub_613310(arg1, var_88)
        case 0x17
            var_88 = &std::_Func_impl<class <lambda_5b43deab91357a94c1d5dfbf4d8c0eb8>,class std::allocator<int32_t>,int32_t,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t, int32_t>'}
            int32_t** var_64_24 = &var_88
            sub_613310(arg1, var_88)
        case 0x18
            var_88 = &std::_Func_impl<class <lambda_d39b076a7a47f89f012952b1d85d2224>,class std::allocator<int32_t>,int32_t,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t, int32_t>'}
            int32_t** var_64_25 = &var_88
            sub_613310(arg1, var_88)
        case 0x19
            sub_6133c0(arg1)
        case 0x1a
            var_88 = &std::_Func_impl<class <lambda_e3f241b4905ad8b7eac20358c9f5f83c>,class std::allocator<int32_t>,void,int32_t&,int32_t>::`vftable'{for `std::_Func_base<void, int32_t&, int32_t>'}
            int32_t** var_64_26 = &var_88
            sub_613870(arg1, "PLUSA", var_88)
        case 0x1b
            var_88 = &std::_Func_impl<class <lambda_3429f73a146e2dcf83a8446b2506d153>,class std::allocator<int32_t>,void,int32_t&,int32_t>::`vftable'{for `std::_Func_base<void, int32_t&, int32_t>'}
            int32_t** var_64_27 = &var_88
            sub_613870(arg1, "MINUSA", var_88)
        case 0x1c
            var_88 = &std::_Func_impl<class <lambda_fc45e4528438d86bd70bb617cbc02fe6>,class std::allocator<int32_t>,void,int32_t&,int32_t>::`vftable'{for `std::_Func_base<void, int32_t&, int32_t>'}
            int32_t** var_64_28 = &var_88
            sub_613870(arg1, "MULA", var_88)
        case 0x1d
            var_88 = &std::_Func_impl<class <lambda_4db99c138668eac698f63bf2bae82ab2>,class std::allocator<int32_t>,void,int32_t&,int32_t>::`vftable'{for `std::_Func_base<void, int32_t&, int32_t>'}
            int32_t** var_64_29 = &var_88
            sub_613870(arg1, "DIVA", var_88)
        case 0x1e
            var_88 = &std::_Func_impl<class <lambda_efec4ce2d6174db49281c2a5b8620e46>,class std::allocator<int32_t>,void,int32_t&,int32_t>::`vftable'{for `std::_Func_base<void, int32_t&, int32_t>'}
            int32_t** var_64_30 = &var_88
            sub_613870(arg1, "MODA", var_88)
        case 0x1f
            var_88 = &std::_Func_impl<class <lambda_743cd94164e7b774231e043199c9f6fa>,class std::allocator<int32_t>,void,int32_t&,int32_t>::`vftable'{for `std::_Func_base<void, int32_t&, int32_t>'}
            int32_t** var_64_31 = &var_88
            sub_613870(arg1, "ANDA", var_88)
        case 0x20
            var_88 = &std::_Func_impl<class <lambda_89cfd1af6abb7cb512bdad60f296ec9c>,class std::allocator<int32_t>,void,int32_t&,int32_t>::`vftable'{for `std::_Func_base<void, int32_t&, int32_t>'}
            int32_t** var_64_32 = &var_88
            sub_613870(arg1, &data_76b808, var_88)
        case 0x21
            var_88 = &std::_Func_impl<class <lambda_59b884c2e20650c9d81be9c15a38c4fc>,class std::allocator<int32_t>,void,int32_t&,int32_t>::`vftable'{for `std::_Func_base<void, int32_t&, int32_t>'}
            int32_t** var_64_33 = &var_88
            sub_613870(arg1, "XORA", var_88)
        case 0x22
            var_88 = &std::_Func_impl<class <lambda_1d27115d85731b93471f89d7ae538093>,class std::allocator<int32_t>,void,int32_t&,int32_t>::`vftable'{for `std::_Func_base<void, int32_t&, int32_t>'}
            int32_t** var_64_34 = &var_88
            sub_613870(arg1, "LSHIFTA", var_88)
        case 0x23
            var_88 = &std::_Func_impl<class <lambda_60fba0c0bcfab72357fa33e04ea10c69>,class std::allocator<int32_t>,void,int32_t&,int32_t>::`vftable'{for `std::_Func_base<void, int32_t&, int32_t>'}
            int32_t** var_64_35 = &var_88
            sub_613870(arg1, "RSHIFTA", var_88)
        case 0x24
            sub_614c70(arg1)
        case 0x25
            var_88 = &std::_Func_impl<class <lambda_b13ef5e0f0999dcb0053a87622503d47>,class std::allocator<int32_t>,void,float&,float>::`vftable'{for `std::_Func_base<void, float&, float>'}
            int32_t** var_64_40 = &var_88
            sub_614db0(arg1, "F_PLUSA", var_88)
        case 0x26
            var_88 = &std::_Func_impl<class <lambda_2dac6b72fa33137279d33189b3456114>,class std::allocator<int32_t>,void,float&,float>::`vftable'{for `std::_Func_base<void, float&, float>'}
            int32_t** var_64_41 = &var_88
            sub_614db0(arg1, "F_MINUSA", var_88)
        case 0x27
            var_88 = &std::_Func_impl<class <lambda_742e75a6b927cd94419352cc715889f1>,class std::allocator<int32_t>,void,float&,float>::`vftable'{for `std::_Func_base<void, float&, float>'}
            int32_t** var_64_42 = &var_88
            sub_614db0(arg1, "F_MULA", var_88)
        case 0x28
            var_88 = &std::_Func_impl<class <lambda_79112ef2496544ef8dcc5a3a9252c15c>,class std::allocator<int32_t>,void,float&,float>::`vftable'{for `std::_Func_base<void, float&, float>'}
            int32_t** var_64_43 = &var_88
            sub_614db0(arg1, "F_DIVA", var_88)
        case 0x29
            sub_405d30(&arg1[0x7d], *(arg1[0x7e] + (arg1[0x7f] << 2) - 8))
            sub_405d30(&arg1[0x7d], *(arg1[0x7e] + (arg1[0x7f] << 2) - 8))
        case 0x2a
            sub_613a20(arg1)
        case 0x2c
            arg1[0x74] = arg1[0x75] + *arg1[0x74]
        case 0x2d
            sub_613af0(arg1)
        case 0x2e
            sub_613b40(arg1)
        case 0x2f
            sub_613b90(arg1)
        case 0x30
            sub_613d90(arg1)
        case 0x31
            sub_6149e0(arg1)
        case 0x32
            sub_614b10(arg1)
        case 0x33
            int32_t edx_4 = arg1[0x7f]
            float xmm0_1 = *(arg1[0x7e] + (edx_4 << 2) - 4)
            arg1[0x7f] = edx_4 - 1
            sub_405d30(&arg1[0x7d], int.d(xmm0_1))
        case 0x34
            int32_t edx_5 = arg1[0x7f]
            int32_t esi_3 = *(arg1[0x7e] + (edx_5 << 2) - 4)
            arg1[0x7f] = edx_5 - 1
            sub_405d30(&arg1[0x7d], _mm_cvtepi32_ps(zx.o(esi_3)))
        case 0x35
            var_88 = &std::_Func_impl<class <lambda_e67d0dd50d360686f9ed8fa1c0a484f7>,class std::allocator<int32_t>,float,float>::`vftable'{for `std::_Func_base<float, float>'}
            int32_t** var_64_44 = &var_88
            sub_614fd0(arg1, x87_r0, var_88)
        case 0x36
            int32_t** var_8c_1 = &var_88
            int32_t var_64_45 = 0
            sub_61be70(&var_88)
            sub_615070(arg1, x87_r0, var_88)
        case 0x37
            int32_t** var_8c_2 = &var_88
            int32_t var_64_46 = 0
            sub_61be80(&var_88)
            sub_615070(arg1, x87_r0, var_88)
        case 0x38
            int32_t** var_8c_3 = &var_88
            int32_t var_64_47 = 0
            sub_61be90(&var_88)
            sub_615070(arg1, x87_r0, var_88)
        case 0x39
            int32_t** var_8c_4 = &var_88
            int32_t var_64_48 = 0
            sub_61bea0(&var_88)
            sub_615070(arg1, x87_r0, var_88)
        case 0x3a
            int32_t** var_8c_5 = &var_88
            int32_t var_64_49 = 0
            sub_61beb0(&var_88)
            sub_615130(arg1, var_88)
        case 0x3b
            int32_t** var_8c_6 = &var_88
            int32_t var_64_50 = 0
            sub_61bec0(&var_88)
            sub_615130(arg1, var_88)
        case 0x3c
            int32_t** var_8c_7 = &var_88
            int32_t var_64_51 = 0
            sub_61bed0(&var_88)
            sub_615130(arg1, var_88)
        case 0x3d
            int32_t** var_8c_8 = &var_88
            int32_t var_64_52 = 0
            sub_61bee0(&var_88)
            sub_615130(arg1, var_88)
        case 0x3e
            int32_t** var_8c_9 = &var_88
            int32_t var_64_53 = 0
            sub_61bef0(&var_88)
            sub_615130(arg1, var_88)
        case 0x3f
            int32_t** var_8c_10 = &var_88
            int32_t var_64_54 = 0
            sub_61bf00(&var_88)
            sub_615130(arg1, var_88)
        case 0x40
            sub_6151f0(arg1)
        case 0x41
            sub_615220(arg1)
        case 0x43
            sub_6153c0(arg1)
        case 0x44
            sub_615550(arg1)
        case 0x48
            sub_615a50(arg1)
        case 0x49
            sub_615950(arg1)
        case 0x4e
            sub_616720(arg1)
        case 0x57
            sub_617080(arg1)
        case 0x58
            sub_617160(arg1)
        case 0x59
            sub_617290(arg1)
        case 0x5a
            sub_618770(arg1)
        case 0x5b
            sub_405d30(&arg1[0x7d], *(arg1[0x488] - 4))
        case 0x5c
            sub_613f70(arg1)
        case 0x5f
            sub_617370(arg1)
        case 0x60
            sub_6174b0(arg1)
        case 0x61
            sub_617640(arg1)
        case 0x62
            sub_617900(arg1)
        case 0x66
            int32_t ecx_3 = arg1[0x7f]
            int32_t edi_1 = *(arg1[0x7e] + (ecx_3 << 2) - 4)
            arg1[0x7f] = ecx_3 - 1
            int32_t esi_1 = *(arg1[0x7e] + ((ecx_3 - 1) << 2) - 4)
            arg1[0x7f] = ecx_3 - 2
            sub_405d30(&arg1[0x7d], edi_1)
            sub_405d30(&arg1[0x7d], esi_1)
        case 0x6d
            sub_613590(arg1)
        case 0x6f
            sub_618f00(arg1)
        case 0x70
            sub_615b50(arg1)
        case 0x71
            sub_615c50(arg1)
        case 0x72
            sub_615d50(arg1)
        case 0x73
            sub_615e50(arg1)
        case 0x76
            sub_619480(arg1)
        case 0x77
            sub_6196f0(arg1)
        case 0x79
            sub_619900(arg1)
        case 0x7a
            sub_613a80(arg1)
        case 0x7b
            sub_613aa0(arg1)
        case 0x7c
            sub_619810(arg1)
        case 0x7e
            sub_6177a0(arg1)
        case 0x7f
            sub_613770(arg1)
        case 0x80
            sub_6137f0(arg1)
        case 0x8d
            sub_614c40(arg1)
        case 0x94
            sub_615f50(arg1)
        case 0x95
            sub_615730(arg1)
        case 0x96
            sub_616270(arg1)
        case 0xf4
            sub_619e80(arg1)
        case 0xfa
            sub_61a3f0(arg1)
        case 0xfb
            sub_61a5b0(arg1)
        case 0xfd
            sub_61a760(arg1)
        case 0xfe
            sub_61a920(arg1)
        case 0xff
            sub_619ba0(arg1)
        case 0x100
            sub_61aad0(arg1)
        case 0x101
            sub_61ab90(arg1)
        case 0x103
            sub_613160(arg1)
        case 0x104
            sub_6168d0(arg1)
        case 0x105
            sub_6192a0(arg1)
        default
            void var_30
            sub_403360(&var_30, &data_76b9a8)
            int32_t var_8_1 = 0
            var_8_1.b = 1
            void var_48
            sub_612320(arg1, sub_61ba30(&arg_4, &var_30, &var_48, &arg_4))
            sub_403320(&var_48)
            int32_t var_8_2 = 0xffffffff
            sub_403320(&var_30)
    
    int32_t var_64_58 = arg1[0x74] - arg1[0x75]
    result = sub_629030(&arg1[0x5d])
    
    if (*(arg1 + 0x1f1) != 0)
        arg1[0x7c].b = 0
else
    while (true)
        result = (**arg1[5])(eax_2)
        
        if (result == 0)
            arg1[0x7b] = 2
            break
        
        if (arg1[0x7c].b != 0)
            goto label_6111b6

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
