BEGIN_CLS(stats::BaseFunctorExecParams)
P_RO(ParamsTypeId)
P(PropertyContext)
P(StoryActionId)
P(Originator)
P(HistoryEntity)
P(StatusSource)
P(EntityToThothContextIndex)
P(field_98)
P(field_9C)
END_CLS()


BEGIN_CLS(stats::FunctorExecParamsType1)
INHERIT(stats::BaseFunctorExecParams)
P(Caster)
P(CasterProxy)
P(Target)
P(TargetProxy)
P(Position)
P(IsFromItem)
P(SpellId)
P(Hit)
P(DamageSums)
P(field_2F8)
P(field_300)
P(SomeRadius)
P(HitWith)
P(field_310)
P(field_314)
P(field_26C)
P(field_31C)
END_CLS()


BEGIN_CLS(stats::FunctorExecParamsType2)
INHERIT(stats::BaseFunctorExecParams)
P(Caster)
P(Position)
P(ExplodeRadius)
P(IsFromItem)
P(SpellId)
P(Hit)
P(DamageSums)
P(SomeRadius)
END_CLS()


BEGIN_CLS(stats::FunctorExecParamsType3)
INHERIT(stats::BaseFunctorExecParams)
P(Caster)
P(Target)
P(field_C0)
P(Position)
P(Distance)
END_CLS()


BEGIN_CLS(stats::FunctorExecParamsType4)
INHERIT(stats::BaseFunctorExecParams)
P(Caster)
P(field_B0)
P(Position)
P(SpellId)
P(Hit)
P(DamageSums)
P(field_2D8)
P(field_2E0)
P(field_2E8)
P(field_2EC)
P(field_2F0)
END_CLS()


BEGIN_CLS(stats::FunctorExecParamsType5)
INHERIT(stats::BaseFunctorExecParams)
P(Owner_M)
P(Target)
P(Caster)
P(field_D0)
P(field_E0)
P(Position)
P(IsFromItem)
P(SpellId)
P(Hit)
P(DamageSums)
END_CLS()


BEGIN_CLS(stats::FunctorExecParamsType6)
INHERIT(stats::BaseFunctorExecParams)
P(Target)
P(TargetProxy)
P(Caster)
P(field_D0)
P(field_E0)
P(Position)
P(IsFromItem)
P(SpellId)
P(Hit)
P(DamageSums)
END_CLS()


BEGIN_CLS(stats::FunctorExecParamsType7)
INHERIT(stats::BaseFunctorExecParams)
P(Caster)
P(Target)
P(UseCasterStats)
END_CLS()


BEGIN_CLS(stats::FunctorExecParamsType8)
INHERIT(stats::BaseFunctorExecParams)
P(Caster)
P(Target)
END_CLS()


BEGIN_CLS(stats::FunctorExecParamsType9)
INHERIT(stats::BaseFunctorExecParams)
P(OnlyAllowRollAdjustments)
P(Source)
P(SourceProxy)
P(Target)
P(TargetProxy)
P(Observer)
P(ObserverProxy)
P(ResolveData)
P(Interrupt)
P(Hit)
P(DamageSums)
P(DamageList)
P(ExecuteInterruptResult)
END_CLS()
