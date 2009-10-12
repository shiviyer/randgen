$combinations = [
	['
		--engine=Falcon
		--reporters=Deadlock,ErrorLog,Backtrace,Recovery,Shutdown
		--mysqld=--loose-falcon-lock-wait-timeout=1
		--mysqld=--loose-innodb-lock-wait-timeout=1
		--mysqld=--log-output=none
		--mysqld=--skip-safemalloc
	'],
	[
		'--mysqld=--falcon-page-size=2K',
		'--mysqld=--falcon-page-size=4K',
		'--mysqld=--falcon-page-size=8K',
		'--mysqld=--falcon-page-size=16K',
		'--mysqld=--falcon-page-size=32K'
	],
	[
		'--rows=10',
		'--rows=100',
		'--rows=1000',
		'--rows=10000'
	],
	[
		'--threads=4',
		'--threads=8',
		'--threads=16',
		'--threads=32',
		'--threads=64'
	],
	[
		'--mysqld=--falcon-checkpoint-schedule=\'1 1 1 1 1\'',
		'--mysqld=--falcon-checkpoint-schedule=\'1 * * * *\'',
		'--mysqld=--falcon-consistent=read=1',
		'--mysqld=--falcon-gopher-threads=1',
		'--mysqld=--falcon-index-chill-threshold=1',
		'--mysqld=--falcon-record-chill-threshold=1',
		'--mysqld=--falcon-io-threads=1',
		'--mysqld=--falcon-page-cache-size=1K',
#		'--mysqld=--falcon-record-memory-max=3M',
		'--mysqld=--falcon-scavenge-schedule=\'1 1 1 1 1\'',
		'--mysqld=--falcon-scavenge-schedule=\'1 * * * *\'',
		'--mysqld=--falcon-serial-log-buffers=1',
		'--mysqld=--falcon-use-deferred-index-hash=1',
		'--mysqld=--falcon-use-supernodes=0'
	], [
		'--varchar-length=0',
		'--varchar-length=1',
		'--varchar-length=2',
		'--varchar-length=4',
		'--varchar-length=8',
		'--varchar-length=16',
		'--varchar-length=32',
		'--varchar-length=64',
		'--varchar-length=128',
		'--varchar-length=256',
		'--varchar-length=512',
		'--varchar-length=1024'
	]
];