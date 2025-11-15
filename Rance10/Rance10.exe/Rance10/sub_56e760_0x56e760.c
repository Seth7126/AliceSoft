// 函数: sub_56e760
// 地址: 0x56e760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct sealengine::CResourceCacheObject<class sealengine::CConstMeshList>::sealengine::CConstMeshList::VTable
    ** var_4 = arg1
*arg1 = &sealengine::CConstMeshList::`vftable'{for `sealengine::CResourceCacheObject<class sealengine::CConstMeshList>'}
sub_56e6d0(&arg1[0x13])
sub_56e660(&arg1[0xe])
sub_56f390(&arg1[0xb])
int32_t* eax = arg1[9]
int32_t* var_10 = eax
sub_56f620(&arg1[9], &var_4, *eax)
sub_403160(arg1[9], 1, 0x18)
int32_t eax_1 = arg1[7]

if (eax_1 u>= 0x10)
    eax_1 = sub_403160(arg1[2], eax_1 + 1, 1)

arg1[7] = 0xf
bool cond:0 = arg1[7] u< 0x10
arg1[6] = 0

if (cond:0)
    arg1[2].b = 0
    return eax_1

char* eax_3 = arg1[2]
*eax_3 = 0
return eax_3
