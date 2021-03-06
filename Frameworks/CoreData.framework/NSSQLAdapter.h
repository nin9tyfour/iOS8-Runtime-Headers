/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray, NSSQLCore;

@interface NSSQLAdapter : NSObject  {
    NSMutableArray *_connections;
    NSSQLCore *_sqlCore;
}


- (id)connections;
- (void)unregisterConnection:(id)arg1;
- (void)registerConnection:(id)arg1;
- (id)newCreateIndexStatementForColumns:(id)arg1;
- (id)newCreateIndexStatementForColumn:(id)arg1;
- (id)newCreateTableStatementForManyToMany:(id)arg1;
- (id)newRenameTableStatementFrom:(id)arg1 to:(id)arg2;
- (id)newDropTableStatementForTableNamed:(id)arg1;
- (id)newCopyAndInsertStatementForManyToMany:(id)arg1 toManyToMany:(id)arg2 intermediateTableName:(id)arg3 invertColumns:(bool)arg4;
- (id)newRenameTableStatementFromManyToMany:(id)arg1 toManyToMany:(id)arg2 orToRandomSpot:(id)arg3;
- (id)newPrimaryKeyInitializeStatementForEntity:(id)arg1 withInitialMaxPK:(long long)arg2;
- (id)newCreatePrimaryKeyTableStatement;
- (id)newCreateTableStatementForEntity:(id)arg1;
- (id)newCorrelationReorderStatementForRelationship:(id)arg1;
- (id)newCorrelationMasterReorderStatementPart2ForRelationship:(id)arg1;
- (id)newCorrelationMasterReorderStatementForRelationship:(id)arg1;
- (id)newCorrelationDeleteStatementForRelationship:(id)arg1;
- (id)newCorrelationInsertStatementForRelationship:(id)arg1;
- (id)newCountStatementWithFetchRequest:(id)arg1;
- (id)newSelectStatementWithFetchRequest:(id)arg1;
- (id)newDeleteStatementWithRow:(id)arg1;
- (id)newUpdateStatementWithRow:(id)arg1;
- (id)newInsertStatementWithRow:(id)arg1;
- (bool)hasOpenConnections;
- (id)createConnection;
- (id)initWithSQLCore:(id)arg1;
- (id)newCreateIndexStatementForColumnWithName:(id)arg1 inTableWithName:(id)arg2;
- (id)typeStringForSQLType:(unsigned int)arg1;
- (id)newStatementWithSQLString:(id)arg1;
- (id)typeStringForColumn:(id)arg1;
- (id)newStatementWithoutEntity;
- (id)_newSelectStatementWithFetchRequest:(id)arg1 ignoreInheritance:(bool)arg2;
- (id)_originalRowForUpdate:(id)arg1;
- (id)newGeneratorWithStatement:(id)arg1;
- (id)newStatementWithEntity:(id)arg1;
- (Class)generatorClass;
- (Class)statementClass;
- (bool)supportsCorrelatedSubqueries;
- (unsigned int)sqlTypeForExpressionConstantValue:(id)arg1;
- (id)sqlCore;
- (id)url;
- (id)type;
- (void)dealloc;

@end
